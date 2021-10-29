#ifndef CASILLERO_INACCESIBLE_H
#define CASILLERO_INACCESIBLE_H

#include "casillero.h"

class Casillero_inaccesible: public Casillero{
    private:
    //al igual q el resto de los casilleros, puede q falten metodos y atributos
    public:
    bool es_posible_construir();
    void mostrar();
    char obtener_tipo();
};

#endif
