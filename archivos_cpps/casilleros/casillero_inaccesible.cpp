#include "../../archivos_h/casilleros/casillero_inaccesible.h"
#include <iostream>

using namespace std;

bool Casillero_inaccesible::es_posible_construir(){
    return false;
}

void Casillero_inaccesible::mostrar(){
    cout << "Soy un casillero inaccesible y no es posible construir aqui" << endl;
}

char Casillero_inaccesible::obtener_tipo(){
    return 'L';
}