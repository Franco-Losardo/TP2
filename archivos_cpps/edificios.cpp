#include "../archivos_h/edificios.h"
#include <string>

using namespace std;

Edificio::Edificio(){
}

Edificio::Edificio(string nombre){
    this->nombre = nombre;
    this->piedra_necesaria = 0;
    this->madera_necesaria = 0;
    this->metal_necesario = 0;
    this->cantidad_permitida = 0;
    this->cantidad_construidos = 0;
    this->coord_x = 0;
    this->coord_y = 0;
    this->ubicado = false;
}

string Edificio::obtener_nombre(){
    return this->nombre;
}

int Edificio::obtener_cantidad_permitida(){
    return this->cantidad_permitida;
}

void Edificio::aumentar_construidos(){
    this->cantidad_construidos++;
}

void Edificio::establecer_ubicacion(int coord_x, int coord_y){
    this->coord_x = coord_x;
    this->coord_y = coord_y;
}

int* Edificio::obtener_ubicacion(){ 
    int puntero_a_coordenadas[2] = {this->coord_x, this->coord_y};
    return puntero_a_coordenadas;
}

int* Edificio::obtener_materiales_necesarios(){ 
    int puntero_a_materiales_necesarios[3] = {this->piedra_necesaria, this->madera_necesaria, this->metal_necesario};
    return puntero_a_materiales_necesarios;
}

void establecer_materiales_necesarios(int piedra_necesaria, int madera_necesaria, int metal_necesario){
    //si ponia this-> me tiraba error
    piedra_necesaria = piedra_necesaria;
    madera_necesaria = madera_necesaria;
    metal_necesario = metal_necesario;
}

bool Edificio::esta_ubicado(){
    return this->ubicado;
}

void Edificio::cambiar_estado(){
    this->ubicado = true;
}
