#include "../archivos_h/casilleros/casillero_construible.h"

using namespace std;

Casillero_construible::Casillero_construible() {}

void Casillero_construible::usar_casillero(Edificio* edificio, Material* material){
    this -> edificio = edificio;
}

bool Casillero_construible::esta_ocupado() {
    return this -> edificio != 0;
}

char Casillero_construible::obtener_tipo() {
    return 'T';
}

Edificio* Casillero_construible::obtener_edificio() {
    return this -> edificio;
}

void Casillero_construible::mostrar() {
    if (this -> esta_ocupado()) {
        cout << COLOR_VERDE_AGUA << "Soy un casillero construible y no me encuentro vacio" << COLOR_POR_DEFECTO <<endl;
        cout << endl;
        this -> edificio -> mostrar_saludo();
    }
    else{
        cout << COLOR_VERDE << "Soy un casillero construible y me encuentro vacío" << COLOR_POR_DEFECTO << endl;
    }
}