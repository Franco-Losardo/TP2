#include "../archivos_h/casilleros/casillero_inaccesible.h"
#include <iostream>

using namespace std;

bool Casillero_inaccesible::es_posible_construir(){
    return false;
}

void Casillero_inaccesible::mostrar(){
    cout << "Soy un casillero inaccesible y no es posible construir aqui" << endl;
}

Edificio* Casillero_inaccesible::obtener_edificio(){
    return nullptr;
}

Material* Casillero_inaccesible::obtener_material(){
    return nullptr;
}

char Casillero_inaccesible::obtener_tipo(){
    return 'L';
}

bool Casillero_inaccesible::esta_ocupado() {
    return false;
}