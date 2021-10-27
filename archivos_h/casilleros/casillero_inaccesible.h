#ifndef CASILLERO_INACCESIBLE_H
#define CASILLERO_INACCESIBLE_H

#include "casillero.h"

class Casillero_inaccesible: public Casillero{
    private:
  
    //al igual q el resto de los casilleros, puede q falten metodos y atributos
    public:
    Casillero_inaccesible(int coord_x, int coord_y);
    bool es_posible_construir();
    void mostrar();
};

#endif
