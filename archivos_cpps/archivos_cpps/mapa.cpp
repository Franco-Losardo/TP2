#include "../archivos_h/mapa.h"
#include <iostream>
#include <fstream>

using namespace std;

Mapa::Mapa(){
    this -> cantidad_filas = 0;
    this -> cantidad_columnas = 0;
    this -> cargar_mapa();
}

void Mapa::crear_mapa() {
    this -> mapa = new Casillero** [this -> cantidad_filas];

    for (int fila = 0; fila < this -> cantidad_filas; fila++) {
        this -> mapa[fila] = new Casillero*[this -> cantidad_columnas];
    }

    for (int fila = 0; fila < this -> cantidad_filas; fila++) {
        for (int columna = 0; columna < this -> cantidad_columnas; columna++) {
            this -> mapa[fila][columna] = 0;
        }
    }
}

void Mapa::cargar_mapa() {
    ifstream archivo(RUTA_MAPA);
    if(!archivo) {
        cout << COLOR_ROJO << "El archivo de mapa no existe. Para continuar, crealos y volve a correr el programa." << COLOR_POR_DEFECTO << endl;
        exit(1);
    }

    char caracter;
    archivo >> this -> cantidad_filas;
    archivo >> this -> cantidad_columnas;
    this -> crear_mapa();

    while (!archivo.eof()) {
        for (int fila = 0; fila < this -> cantidad_filas; fila++) {
            for (int columna = 0; columna < this -> cantidad_columnas; columna++) {
                archivo >> caracter;
                if (caracter == 'T') {
                    Casillero_construible* casillero_c = 0;
                    this -> colocar_casillero(fila, columna, casillero_c);
                }
                else if (caracter == 'C') {
                    Casillero_transitable* casillero_t = 0;
                    this -> colocar_casillero(fila, columna, casillero_t);
                }
                else {
                    Casillero_inaccesible* casillero_i = 0;
                    this -> colocar_casillero(fila, columna, casillero_i);
                }
            }
        }
    }
    archivo.close();
}

void Mapa::colocar_casillero(int fila, int columna, Casillero* casillero){
    this -> mapa[fila][columna] = casillero;
}

bool Mapa::se_puede_construir(int fila, int columna){
    return this->mapa[fila][columna] -> obtener_tipo() == 'T';
}

void Mapa::mostrar_mapa(){
    for (int fila = 0; fila < this -> cantidad_filas; fila++){
        for (int columna = 0; columna < this -> cantidad_columnas; columna++){
            cout << this -> mapa[fila][columna] -> obtener_tipo() << " ";
        }
        cout << endl;
    }
}

Mapa::~Mapa() {
    for (int fila = 0; fila < this -> cantidad_filas; fila++) {
        delete [] this -> mapa[fila];
    }

    delete [] this -> mapa;
    
}