#include "../archivos_h/casilleros/casillero_inaccesible.h"
#include <iostream>

using namespace std;

void Casillero_inaccesible::mostrar(){
    cout << COLOR_ROJO << "Soy un casillero inaccesible y no es posible construir aqui" << COLOR_POR_DEFECTO << endl;
}

char Casillero_inaccesible::obtener_tipo(){
    return 'L';
}