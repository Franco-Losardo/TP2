#ifndef CASILLERO_INACCESIBLE_H
#define CASILLERO_INACCESIBLE_H

#include "casillero.h"

class Casillero_inaccesible: public Casillero {
    private:
        //al igual q el resto de los casilleros, puede q falten metodos y atributos

    public:
        // PRE:
        // POS:
        char obtener_tipo();

        // PRE:
        // POS:
        void mostrar();
};

#endif