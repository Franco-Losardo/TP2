#include "../archivos_h/mapa.h"
#include <iostream>

Mapa::Mapa(int cantidad_de_filas, int cantidad_de_columnas){
    this->cantidad_de_filas = cantidad_de_filas;
    this->cantidad_de_columnas = cantidad_de_columnas;
    //Matriz dinamica
    this->matriz = new int*[cantidad_de_filas];
    for (int i = 0; i < cantidad_de_filas; ++i){
        matriz[i] = new int[cantidad_de_columnas];
    }
}