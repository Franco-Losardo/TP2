#include <iostream>
#include <fstream>
#include "../archivos_h/system.h"
#include "../archivos_h/andypolis.h"


using namespace std;

Andypolis::Andypolis(){
    this -> materiales = new Material[MATERIALES_DISPONIBLES_MINIMO];
    this -> cantidad_de_materiales = 0;
    cargar_materiales();
    cargar_mapa();
}

int Andypolis::pedir_opcion() {
    int opcion_ingresada = 0;
    cout << endl;
    cout << "1. Construir edificio por nombre" << endl;
    cout << endl;
    cout << "2. Listar los edificios construidos" << endl;
    cout << endl;
    cout << "3. Listar todos los edificios" << endl;
    cout << endl;
    cout << "4. Demoler un edificio por coordenada" << endl;
    cout << endl;
    cout << "5. Mostrar mapa" << endl;
    cout << endl;
    cout << "6. Consultar coordenada" << endl;
    cout << endl;
    cout << "7. Mostrar inventario" << endl;
    cout << endl;
    cout << "8. Recolectar recursos producidos" << endl;
    cout << endl;
    cout << "9. Lluvia de recursos" << endl;
    cout << endl;
    cout << "10. Guardar y salir" << endl;
    cout << "Ingrese la opcion deseada: ";
    cin >> opcion_ingresada;
    system(CLR_SCREEN);
    return opcion_ingresada;
}

void Andypolis::cargar_mapa(){
    ifstream archivo_mapa(RUTA_MAPA);
    if(!archivo_mapa){
        cout << COLOR_ROJO << "El archivo de mapa no existe. Para continuar, crealos y volve a correr el programa." << COLOR_POR_DEFECTO << endl;
        exit(1);
    }
    char caracter;
    int cantidad_filas;
    int cantidad_columnas;

    this->mapa = Mapa(cantidad_filas, cantidad_columnas);

    while (!archivo_mapa.eof()){
        for (int fila = 0; fila < cantidad_filas; fila++){
            for (int columna = 0; columna < cantidad_columnas; columna++){
                archivo_mapa >> caracter;
                if (caracter == 'T'){
                    Casillero_construible casillero_c;
                    this->mapa.colocar_casillero(fila, columna, casillero_c);
                }
                else if (caracter == 'C'){
                    Casillero_transitable casillero_t;
                    this->mapa.colocar_casillero(fila, columna, casillero_t);
                }
                else{
                    Casillero_inaccesible casillero_i;
                    this->mapa.colocar_casillero(fila, columna, casillero_i);
                }
            }
        }
    }
    archivo_mapa.close();
}

void Andypolis::mostrar_mapa(){
    this->mapa.mostrar_mapa();
}

void Andypolis::cargar_materiales(){
    ifstream archivo_materiales(RUTA_MATERIALES);
    if (!archivo_materiales){
        cout << COLOR_ROJO << "El archivo de materiales no existe. Para continuar, crealos y volve a correr el programa." << COLOR_POR_DEFECTO << endl;
        exit(1);
    }
    string nombre_material;
    string cantidad;
    while(getline(archivo_materiales, nombre_material, DELIMITADOR)){
        getline(archivo_materiales, cantidad);
        if(nombre_material == "piedra"){
            this->materiales[this->cantidad_de_materiales] = Piedra(nombre_material, stoi(cantidad));
        }
        else if(nombre_material == "madera"){
            this->materiales[this->cantidad_de_materiales] = Madera(nombre_material, stoi(cantidad));
        }
        else if(nombre_material == "metal"){
            this->materiales[this->cantidad_de_materiales] = Metal(nombre_material, stoi(cantidad));
        }        
        this -> cantidad_de_materiales++;
        if (this -> cantidad_de_materiales == MATERIALES_DISPONIBLES_MINIMO){
            redimensionar_materiales(this -> cantidad_de_materiales * 2);
        }
    }
    archivo_materiales.close();
    redimensionar_materiales(this -> cantidad_de_materiales);
}


void Andypolis::redimensionar_materiales(int nueva_longitud){//esto tal vez haya q cambiarlo pq hay una clase x cada material
    Material *nuevo_arreglo_materiales = new Material[nueva_longitud];
    for (int i = 0; i < this-> cantidad_de_materiales; i++){
        nuevo_arreglo_materiales[i] = this -> materiales[i];
    }
    delete[] this -> materiales;
    this -> materiales = nuevo_arreglo_materiales;
}

void Andypolis::mostrar_inventario(){
    for (int i = 0; i < this -> cantidad_de_materiales; i++){
        materiales[i].mostrar_material();
    }
}

void Andypolis::guardar_materiales(){
    ofstream archivo_materiales(RUTA_MATERIALES);
    for (int i = 0; i < this -> cantidad_de_materiales; i++){
        string nombre_material = this -> materiales[i].obtener_tipo();
        int cantidad = this -> materiales[i].obtener_cantidad();
        archivo_materiales << nombre_material << DELIMITADOR << cantidad << endl;
    }
    archivo_materiales.close();
}

void Andypolis::guardar_y_salir(){
    guardar_materiales();
    guardar_edificios();
}
