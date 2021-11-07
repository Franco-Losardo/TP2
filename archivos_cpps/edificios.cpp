#include "../archivos_h/edificios.h"

using namespace std;

Edificio::Edificio() {}

string Edificio::obtener_nombre() {
    return this -> nombre;
}

int Edificio::obtener_cantidad_permitida() {
    return this -> cantidad_permitida;
}

string Edificio::obtener_representacion(){
    transform(this->representacion.begin(), this->representacion.end(), this->representacion.begin(), ::toupper);
    return this->representacion;
}

int* Edificio::obtener_ubicacion() { 
    return this -> coordenadas;
}

int* Edificio::obtener_materiales_necesarios() { 
    return this -> materiales_necesarios;
}

Edificio::~Edificio(){
    /*delete[] coordenadas;
    delete[] materiales_necesarios;*/
    cout << "EDIFICIO" << endl;
}
