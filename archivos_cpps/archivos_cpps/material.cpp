#include "../archivos_h/material.h"

using namespace std;

void Material::establecer_tipo(string tipo_material) {
    this -> tipo_material = tipo_material;
}

void Material::establecer_cantidad(int cantidad_material) {
    this -> cantidad += cantidad_material;
}

string Material::obtener_tipo(){
    return this -> tipo_material;
}

int Material::obtener_cantidad(){
    return this -> cantidad;
}

void Material::usar_material(int cantidad_necesaria){
    this -> cantidad -= cantidad_necesaria;
}

void Material::mostrar_material(){
    cout << "|" << setw(10) << this -> tipo_material << "|" << setw(10) << this -> cantidad << "|" << endl;
}
