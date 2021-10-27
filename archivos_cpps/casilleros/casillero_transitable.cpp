#include "../../archivos_h/casilleros/casillero_transitable.h"
#include <iostream>

using namespace std;

Casillero_transitable::Casillero_transitable(int coord_x, int coord_y){
    this->coord_x = coord_x;
    this->coord_y = coord_y;
    this->ocupado = false;
}

bool Casillero_transitable::es_posible_construir(){
    return (ocupado == false);
}

void Casillero_transitable::mostrar(){
    if (this->ocupado){
        cout << "Soy un casillero transitable y no me encuentro vacio" << endl;
        this->objeto.saludar();
    }
    else{
        cout << "Soy un casillero transitable y me encuentro vacío" << endl;
    }
}

void Casillero_transitable::ocupar_casillero(Material objeto){
    this->ocupado = true;
    this->objeto = objeto;
}