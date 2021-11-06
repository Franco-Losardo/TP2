#ifndef CASILLERO_TRANSITABLE_H
#define CASILLERO_TRANSITABLE_H

#include "casillero.h"

class Casillero_transitable: public Casillero {
    private:
        Material* material;
        char tipo;
    public:
        // PRE:
        // POS:
        Casillero_transitable();

        // PRE:
        // POS:
        void usar_casillero(Edificio* edificio, Material* material);

        // PRE:
        // POS:
        bool esta_ocupado();

        // PRE:
        // POS:
        char obtener_tipo();

        // PRE:
        // POS:
        Material* obtener_material();

        // PRE:
        // POS:
        void mostrar();
};

#endif