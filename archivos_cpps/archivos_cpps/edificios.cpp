#include "../archivos_h/edificios.h"

using namespace std;

Edificio::Edificio() {}

Edificio::Edificio(string nombre) {
    this -> nombre = nombre;
    this -> materiales_necesarios = new int[3];
    this -> cantidad_permitida = 0;
    this -> cantidad_construidos = 0;
    this -> coordenadas = new int[2];
    this -> ubicado = false;
}

string Edificio::obtener_nombre() {
    return this -> nombre;
}

int Edificio::obtener_cantidad_permitida() {
    return this -> cantidad_permitida;
}

void Edificio::aumentar_construidos() {
    this -> cantidad_construidos++;
}

void Edificio::establecer_ubicacion(int coord_x, int coord_y) {
    this -> coordenadas[0] = coord_x;
    this -> coordenadas[1] = coord_y;
}

int* Edificio::obtener_ubicacion() { 
    return this -> coordenadas;
}

int* Edificio::obtener_materiales_necesarios() { 
    return this -> materiales_necesarios;
}

void Edificio::establecer_materiales_necesarios(int piedra_necesaria, int madera_necesaria, int metal_necesario) {
    this -> materiales_necesarios[0] = piedra_necesaria;
    this -> materiales_necesarios[1] = madera_necesaria;
    this -> materiales_necesarios[2] = metal_necesario;
}

bool Edificio::esta_ubicado() {
    return this -> ubicado;
}

void Edificio::cambiar_estado() {
    this -> ubicado = true;
}
