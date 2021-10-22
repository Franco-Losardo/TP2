#include "../archivos_h/edificios.h"

using namespace std;

Edificio::Edificio() {
}

Edificio::Edificio(string nombre, int cantidad_permitida, int* materiales_necesarios) {
    this -> nombre = nombre;
    this -> cantidad_permitida = cantidad_permitida;
    this -> materiales_necesarios = materiales_necesarios;
    cantidad_construidos = 0;
    int* ubicaciones[cantidad_construidos];
}

string Edificio::obtener_nombre() {
    return nombre;
}

int Edificio::obtener_cantidad_permitida() {
    return cantidad_permitida;
}

void Edificio::aumentar_construidos() {
    cantidad_construidos++;
}

void Edificio::establecer_ubicacion(UBICACION[]) {
    // Agregaría UBICACION a ubicaciones
}