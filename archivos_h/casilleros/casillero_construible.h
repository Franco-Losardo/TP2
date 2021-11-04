#ifndef CASILLERO_CONSTRUIBLE_H
#define CASILLERO_CONSTRUIBLE_H

#include "casillero.h"

class Casillero_construible: public Casillero {
    private:
        Edificio* edificio;
    public:
        // PRE:
        // POS:
        Casillero_construible();

        // PRE:
        // POS:
        void usar_casillero(Edificio *edificio, Material* material);

        // PRE:
        // POS:
        void ocupar_casillero(Edificio* objeto);

        // PRE:
        // POS:
        bool esta_ocupado();

        // PRE:
        // POS:
        char obtener_tipo();

        // PRE:
        // POS:
        Edificio* obtener_edificio();

        // PRE:
        // POS:
        Material* obtener_material();

        // PRE:
        // POS:
        void mostrar();
};

#endif
