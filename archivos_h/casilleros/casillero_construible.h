#ifndef CASILLERO_CONSTRUIBLE_H
#define CASILLERO_CONSTRUIBLE_H

#include "casillero.h"
#include "../edificios.h"
//deberia haber un artibuto que sea el objeto q 
//contiene(osea el edificio), pero al ser abstracto no se puede poner como hice
class Casillero_construible: public Casillero{
    private:
    bool ocupado;
    //Edificio objeto;

    public:
    Casillero_construible(int coord_x, int coord_y);
    bool es_posible_construir();
    void mostrar();
    //void ocupar_casillero(Edificio objeto); //nose si para ocuparlo haria falta las coordenadas
};

#endif
