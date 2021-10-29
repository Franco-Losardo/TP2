#include "../../archivos_h/construcciones/aserradero.h"
#include "../../archivos_h/constantes.h"
#include <iostream>

int Aserradero::brindar_materiales(){
    return BRINDAR_MATERIALES_ASERRADERO;
}

void Aserradero::mostrar_saludo(){
    cout << "Soy un aserradero y me encuentro en el casillero consultado" << endl;
}