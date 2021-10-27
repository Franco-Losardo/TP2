#include "../../archivos_h/casilleros/casillero_construible.h"
#include <iostream>

using namespace std;

Casillero_construible::Casillero_construible(int coord_x, int coord_y){
    this -> coord_x = coord_x;
    this -> coord_y = coord_y;
    this -> ocupado = false;
}

bool Casillero_construible::es_posible_construir(){
    return (ocupado == false);
}

void Casillero_construible::mostrar(){
    if(this->ocupado){
        cout << "Soy un casillero construible y no me encuentro vacio" << endl;
    }
    else{
        cout << "Soy un casillero construible y me encuentro vacío" << endl;
    }
}