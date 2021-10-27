#include "../archivos_h/material.h"
#include <string>

using namespace std;

Material::Material(){
}

Material::Material(string nombre_material, int cantidad){
    this -> nombre_material = nombre_material;
    this -> cantidad = cantidad;
}

string Material::obtener_tipo(){
    return this -> nombre_material;
}

int Material::obtener_cantidad(){
    return this -> cantidad;
}

void Material::usar_material(int cantidad_necesaria){
    this -> cantidad -= cantidad_necesaria;
}

void Material::devolver_material(int cantidad_a_devolver){
    this -> cantidad += cantidad_a_devolver;
}

void Material::mostrar_material(){
    cout << "|" << setw(10) << this -> nombre_material << "|" << setw(10) << this -> cantidad << "|" << endl;
}

void Material::saludar(){
    cout << "Soy un/a " << this->nombre_material << " y me encuentro en el casillero consultado" << endl;
}