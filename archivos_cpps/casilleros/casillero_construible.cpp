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
        cout << "Soy un/a " << this->objeto->obtener_nombre() << " y me encuentro en la coordenada consultada" << endl;
    }
    else{
        cout << "Soy un casillero construible y me encuentro vacío" << endl;
    }
}

void Casillero_construible::ocupar_casillero(Edificio* objeto){
    this->ocupado = true;
    this->objeto = objeto;
    objeto->establecer_ubicacion(this->coord_x, this->coord_y);
    objeto->cambiar_estado();
    objeto->aumentar_construidos();
}