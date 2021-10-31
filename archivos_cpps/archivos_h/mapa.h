#ifndef MAPA_H
#define MAPA_H
#include "constantes.h"
#include "casilleros/casillero_construible.h"
#include "casilleros/casillero_transitable.h"
#include "casilleros/casillero_inaccesible.h"

class Mapa {
    private:
        int cantidad_filas;
        int cantidad_columnas;
        Casillero*** mapa;

    public:
        // PRE:
        // POS:
        Mapa();

        // PRE:
        // POS:
        void cargar_mapa();

        // PRE:
        // POS:
        void crear_mapa();

        // PRE:
        // POS:
        void colocar_casillero(int fila, int columna, Casillero* casillero);

        // PRE:
        // POS:
        bool se_puede_construir(int fila, int columna);

        // PRE:
        // POS:
        void mostrar_mapa();

        // PRE:
        // POS:
        ~Mapa();
};

#endif