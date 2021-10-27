#ifndef CASILLERO_TRANSITABLE_H
#define CASILLERO_TRANSITABLE_H

#include "casillero.h"
#include "../material.h"

class Casillero_transitable: public Casillero{
    private:
    bool ocupado;
    Material objeto;

    public:
    Casillero_transitable(int coord_x, int coord_y);
    bool es_posible_construir();
    void mostrar();
    void ocupar_casillero(Material objeto);//nose si para ocuparlo haria falta las coordenadas
};

#endif
