#ifndef CASILLERO_TRANSITABLE_H
#define CASILLERO_TRANSITABLE_H

#include "casillero.h"
#include "../material.h"

class Casillero_transitable: public Casillero{
    private:
        bool ocupado;
        Material* objeto;

    public:
        bool esta_ocupado();
        void mostrar();
        void ocupar_casillero(Material* objeto);//nose si para ocuparlo haria falta las coordenadas
        char obtener_tipo();
};

#endif
