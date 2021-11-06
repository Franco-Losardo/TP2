#include "../archivos_h/casilleros/casillero_inaccesible.h"
#include <iostream>

using namespace std;

Casillero_inaccesible::Casillero_inaccesible(){
    this -> tipo = 'L';
}

void Casillero_inaccesible::mostrar(){
    cout << COLOR_ROJO << "Soy un casillero inaccesible y no es posible construir aqui" << COLOR_POR_DEFECTO << endl;
}

char Casillero_inaccesible::obtener_tipo(){
    return this -> tipo;
}