#include "../archivos_h/construcciones/escuela.h"

using namespace std;

int Escuela::cantidad_construidos = 0;
int** Escuela::ubicaciones = 0;

Escuela::Escuela(string nombre, int piedra_necesaria, int madera_necesaria, int metal_necesario, int permitidos) {
    this -> nombre = nombre;
    this -> cantidad_permitida = permitidos;
    this -> ubicaciones = new int*[permitidos];
    this -> materiales_necesarios = new int[3];
    this -> materiales_necesarios[0] = piedra_necesaria;
    this -> materiales_necesarios[1] = madera_necesaria;
    this -> materiales_necesarios[2] = metal_necesario;
}

Escuela::Escuela(string nombre, int coord_x, int coord_y) {
    this -> nombre = nombre;
    this -> representacion = nombre[0];
    this -> ubicaciones[cantidad_construidos] = new int[2];
    this -> ubicaciones[cantidad_construidos][0] = coord_x;
    this -> ubicaciones[cantidad_construidos][1] = coord_y;
    this -> cantidad_construidos++;
}

int Escuela::obtener_construidos() {
    return this -> cantidad_construidos;
}

int** Escuela::obtener_ubicaciones() {
    return this -> ubicaciones;
}

void Escuela::mostrar_edificio() {
    cout << "--> " << COLOR_VERDE_AGUA << this -> nombre << COLOR_POR_DEFECTO << endl;
    cout << endl;
    cout << "Piedra requerida: " << this -> materiales_necesarios[0] << endl;
    cout << "Madera requerida: " << this -> materiales_necesarios[1] << endl;
    cout << "Metal requerido: " << this -> materiales_necesarios[2] << endl;
    cout << "Construidos hasta el momento: " << this -> cantidad_construidos << endl;
    cout << "Puede construir " << this -> cantidad_permitida - this -> cantidad_construidos << " mas" << endl;
    cout << "Brinda material: NO" << endl;
    cout << COLOR_MARRON << LINEA_DIVISORIA << COLOR_POR_DEFECTO << endl;
}

int Escuela::brindar_materiales() {
    return 0;
}
void Escuela::mostrar_saludo() {
    cout << COLOR_MARRON <<"Soy una escuela y me encuentro en el casillero consultado" << COLOR_POR_DEFECTO <<endl;
}


Escuela::~Escuela() {
    for (int i = 0; i < this -> cantidad_construidos; i++) {
        delete [] this -> ubicaciones[i];
    }

    delete [] this -> ubicaciones;
    cout << "ESCUELA" << endl;
}