#include "../archivos_h/casilleros/casillero_construible.h"

using namespace std;

Casillero_construible::Casillero_construible() {
    
}

void Casillero_construible::usar_casillero(Edificio* edificio, Material* material){
    if(edificio != nullptr){
        this->edificio = edificio;
    }
}

void Casillero_construible::ocupar_casillero(Edificio* edificio) {
    this -> edificio = edificio;
}

bool Casillero_construible::esta_ocupado() {
    return (bool)this -> edificio;
}

char Casillero_construible::obtener_tipo() {
    return 'T';
}

Edificio* Casillero_construible::obtener_edificio() {
    return this -> edificio;
}

Material* Casillero_construible::obtener_material(){
    return nullptr;
}

void Casillero_construible::mostrar() {
    if (this -> edificio) {
        cout << "Soy un casillero construible y no me encuentro vacio" << endl;
        this -> edificio -> mostrar_saludo();
    }
    else{
        cout << "Soy un casillero construible y me encuentro vacío" << endl;
    }
}