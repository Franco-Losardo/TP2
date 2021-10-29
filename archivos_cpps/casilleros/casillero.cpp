#include "../../archivos_h/casilleros/casillero.h"
#include <iostream>

Casillero::Casillero(){
}

Casillero::Casillero(int coordenada_x, int coordenada_y){
    this->coord_x = coordenada_x;
    this->coord_y = coordenada_y;
}