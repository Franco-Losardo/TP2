#ifndef CASILLERO_H
#define CASILLERO_H

#include "../material.h"
#include "../edificios.h"

class Casillero{
    protected:
        int coord_x;
        int coord_y;

    public:
        // PRE:
        // POS:
        Casillero();

        // PRE:
        // POS:
        Casillero(int coordenada_x, int coordenada_y);

        // PRE:
        // POS:
        virtual void usar_casillero(Edificio *edificio, Material *material);

        // PRE:
        // POS:
        virtual bool esta_ocupado();

        // PRE:
        // POS:
        virtual void mostrar() = 0;

        // PRE:
        // POS:
        virtual char obtener_tipo() = 0;

        // PRE:
        // POS:
        virtual Edificio* obtener_edificio();

        // PRE:
        // POS:
        virtual Material* obtener_material();
};

#endif