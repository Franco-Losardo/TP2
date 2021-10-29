#ifndef MAPA_H
#define MAPA_H
#include "casillero.h"

class Mapa: public Casillero{
private:
    int cantidad_filas;
    int cantidad_columnas;
    Casillero** mapa;

public:
    // PRE:
    // POS:
    Mapa();

    // PRE:
    // POS:
    Mapa(int cantidad_filas, int cantidad_columnas);

    // PRE:
    // POS:
    void colocar_casillero(int fila, int columna, Casillero casillero);

    // PRE:
    // POS:
    bool se_puede_construir(int fila, int columna);

    // PRE:
    // POS:
    void mostrar_mapa();
};

#endif