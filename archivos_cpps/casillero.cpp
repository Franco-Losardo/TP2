#include "../archivos_h/casilleros/casillero.h"
#include <iostream>

Casillero::Casillero() {}

Casillero::Casillero(int coord_x, int coord_y){
    this -> coord_x = coord_x;
    this -> coord_y = coord_y;
}

void Casillero::usar_casillero(Edificio *edificio, Material *material) {}

Edificio* Casillero::obtener_edificio() {
    return 0;
}

Material* Casillero::obtener_material() {
    return 0;
}

bool Casillero::esta_ocupado() {
    return false;
}

Casillero::~Casillero(){
    cout << "CASILLERO" << endl;
}