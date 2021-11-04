#include "../archivos_h/casilleros/casillero_transitable.h"

using namespace std;

Casillero_transitable::Casillero_transitable(){
}

bool Casillero_transitable::esta_ocupado() {
    return (bool) this -> material;
}

void Casillero_transitable::usar_casillero(Edificio* edificio, Material* material){
    if (edificio == nullptr){
        this->material = material;
    }
}

char Casillero_transitable::obtener_tipo() {
    return 'C';
}

Material* Casillero_transitable::obtener_material() {
    return this -> material;
}

Edificio* Casillero_transitable::obtener_edificio(){
    return nullptr;
}

void Casillero_transitable::mostrar() {
    if (this -> material) {
        cout << "Soy un casillero transitable y no me encuentro vacio" << endl;
        this -> material->saludar();
    }
    else {
        cout << "Soy un casillero transitable y me encuentro vacío" << endl;
    }
}