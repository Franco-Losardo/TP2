#ifndef CASILLERO_H
#define CASILLERO_H

#include "../material.h"
#include "../edificios.h"

class Casillero{
    public:
        // PRE:
        // POS:
        Casillero();

        // PRE: recibe dos coordenadas
        // POS: crea un casillero en las coordenadas recibidas
        //Casillero(int coord_x, int coord_y);

        // PRE:
        // POS:
        virtual void usar_casillero(Edificio* edificio, Material* material);

        // PRE:
        // POS:
        virtual void vaciar_casillero();

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

        // PRE:
        // POS:
        virtual ~Casillero();
};

#endif