#include "../archivos_h/mapa.h"
#include <iostream>

using namespace std;

Mapa::Mapa(){
}

Mapa::Mapa(int cantidad_filas, int cantidad_columnas){
    this->cantidad_filas = cantidad_filas;
    this->cantidad_columnas = cantidad_columnas;
    this->mapa = new Casillero* [cantidad_filas];
}

void Mapa::colocar_casillero(int fila, int columna, Casillero casillero){
    this->mapa[fila][columna] = casillero;//aca no estoy nada seguro
}

bool Mapa::se_puede_construir(int fila, int columna){
    return this->mapa[fila][columna].obtener_tipo() == 'T';
}

void Mapa::mostrar_mapa(){
    for (int fila = 0; fila < this->cantidad_filas; fila++){
        for (int columna = 0; columna < this->cantidad_columnas; columna++){
            cout << this->mapa[fila][columna].obtener_tipo() << " ";
        }
        cout << endl;
    }
}