#ifndef CASILLERO_CONSTRUIBLE_H
#define CASILLERO_CONSTRUIBLE_H

#include "casillero.h"
#include "../edificios.h"
//deberia haber un artibuto que sea el objeto q 
//contiene(osea el edificio), pero al ser abstracto no se puede poner como hice
//ahora con el puntero deberia andar
class Casillero_construible: public Casillero{
    private:
        bool ocupado;
        Edificio* objeto;

    public:
        bool esta_ocupado();
        void mostrar();
        void ocupar_casillero(Edificio* objeto);
        char obtener_tipo();
};

#endif
