#include "../../archivos_h/casilleros/casillero_inaccesible.h"
#include <iostream>

using namespace std;

Casillero_inaccesible::Casillero_inaccesible(int coord_x, int coord_y){
    this->coord_x = coord_x;
    this->coord_y = coord_y;
}

bool Casillero_inaccesible::es_posible_construir(){
    return false;
}

void Casillero_inaccesible::mostrar(){
    cout << "Soy un casillero inaccesible y no es posible construir aqui" << endl;
}