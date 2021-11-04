#include "../archivos_h/mapa.h"
#include <iostream>
#include <fstream>

using namespace std;

Mapa::Mapa() {}

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
        cout << COLOR_ROJO << "El archivo de mapa no existe. Para continuar, crealo y volve a correr el programa." << COLOR_POR_DEFECTO << endl;
        exit(1);
    }

    char caracter;
    archivo >> this ->  cantidad_filas;
    archivo >> this -> cantidad_columnas;
    this -> crear_mapa();
    for (int fila = 0; fila < this -> cantidad_filas; fila++) {
        for (int columna = 0; columna < this -> cantidad_columnas; columna++) {
            archivo >> caracter;
            if (caracter == 'T') {
                this -> mapa[fila][columna] = new Casillero_construible;
            }
            else if (caracter == 'C') {
                this -> mapa[fila][columna] = new Casillero_transitable;
            }
            else if (caracter == 'L'){
                this -> mapa[fila][columna] = new Casillero_inaccesible;
            }
        }
    }
    archivo.close();
}

void Mapa::colocar_casillero(int coord_x, int coord_y, Casillero* casillero){
    this -> mapa[coord_y][coord_x] = casillero;
}

bool Mapa::esta_ocupado(int coord_x, int coord_y){
    return this->mapa[coord_y][coord_x]->esta_ocupado();
}

void Mapa::ocupar_casillero(Edificio* edificio, Material* material, int coord_x, int coord_y){
    if (edificio != nullptr){
        this->mapa[coord_y][coord_x]->usar_casillero(edificio, nullptr);
    }
    else if (material != nullptr){
        this->mapa[coord_y][coord_x]->usar_casillero(nullptr, material);
    }
}

void Mapa::consultar_coordenada(int coord_x, int coord_y) {
    this -> mapa[coord_y][coord_x] -> mostrar();
}

bool Mapa::se_puede_construir(int coord_x, int coord_y){
    return this -> mapa[coord_y][coord_x] -> obtener_tipo() == 'T';
}

void Mapa::mostrar_mapa(){
    for (int fila = 0; fila < this -> cantidad_filas; fila++) {
        for (int columna = 0; columna < this -> cantidad_columnas; columna++) {
            if (!this -> mapa[fila][columna] -> esta_ocupado()) {
                cout << this -> mapa[fila][columna] -> obtener_tipo() << ' ';
            }
            else if (this -> mapa[fila][columna] -> obtener_tipo() == 'T') {
                cout << this -> mapa[fila][columna] -> obtener_edificio() -> obtener_representacion() << ' ';
            }
            else {
                cout << this -> mapa[fila][columna] -> obtener_material() -> obtener_representacion() << ' ';
            }
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