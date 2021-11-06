#ifndef CASILLERO_INACCESIBLE_H
#define CASILLERO_INACCESIBLE_H

#include "casillero.h"

class Casillero_inaccesible: public Casillero {
    private:
        char tipo;

    public:
        // PRE:
        // POS:
        Casillero_inaccesible();
        
        // PRE:
        // POS:
        char obtener_tipo();

        // PRE:
        // POS:
        void mostrar();
};

#endif