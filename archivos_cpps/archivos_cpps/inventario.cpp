#include "../archivos_h/inventario.h"
#include <fstream>

using namespace std;

Inventario::Inventario() {
    this -> cantidad_materiales = 0;
    this -> inventario = new Material*[MATERIALES_DISPONIBLES_MINIMO];
}

void Inventario::cargar_inventario() {
    ifstream archivo(RUTA_MATERIALES);
    if (!archivo) {
        cout << COLOR_ROJO << "El archivo de materiales no existe. Para continuar, crealos y volve a correr el programa." << COLOR_POR_DEFECTO << endl;
        exit(1);
    }

    string tipo_material;
    int cantidad;
    while(archivo >> tipo_material >> cantidad) {
        if (tipo_material == "piedra") {
            Piedra* piedra = 0;
            this -> inventario[this -> cantidad_materiales] = piedra;
        }
        else if (tipo_material == "madera") {
            Madera* madera = 0;
            this -> inventario[this -> cantidad_materiales] = madera;
        }
        else if (tipo_material == "metal") {
            Metal* metal = 0;
            this -> inventario[this -> cantidad_materiales] = metal;
        }
        this -> inventario[this -> cantidad_materiales] -> establecer_tipo(tipo_material);
        this -> inventario[this -> cantidad_materiales] -> establecer_cantidad(cantidad);
        this -> cantidad_materiales++;

        if (this -> cantidad_materiales == MATERIALES_DISPONIBLES_MINIMO) {
            this -> redimensionar_inventario(this -> cantidad_materiales * 2);
        }
    }
    archivo.close();
    this -> redimensionar_inventario(this -> cantidad_materiales);
}

void Inventario::redimensionar_inventario(int nueva_longitud) {
    Material** nuevo_inventario = new Material*[nueva_longitud];
    for (int i = 0; i < this -> cantidad_materiales; i++) {
        nuevo_inventario[i] = this -> inventario[i];
    }
    delete [] this -> inventario;
    this -> inventario = nuevo_inventario;
}

void Inventario::guardar_inventario() {
    ofstream archivo(RUTA_MATERIALES);
    for (int i = 0; i < this -> cantidad_materiales; i++) {
        string nombre_material = this -> inventario[i] -> obtener_tipo();
        int cantidad = this -> inventario[i] -> obtener_cantidad();
        archivo << nombre_material << DELIMITADOR << cantidad << endl;
    }
    archivo.close();
}

int Inventario::obtener_cantidad_materiales() {
    return this -> cantidad_materiales;
}

Material** Inventario::obtener_inventario() {
    return this -> inventario;
}

void Inventario::mostrar_inventario() {
    for (int i = 0; i < this -> cantidad_materiales; i++) {
        this -> inventario[i] -> mostrar_material();
    }
}

Inventario::~Inventario() {
    delete [] this -> inventario;
}