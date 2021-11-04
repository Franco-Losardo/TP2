#include "../archivos_h/material.h"

using namespace std;

Material::Material(){}

Material::Material(string tipo_material, int cantidad){
    this -> nombre_material = tipo_material;
    this -> cantidad = cantidad;
}


void Material::establecer_cantidad(int cantidad_material) {
    this -> cantidad += cantidad_material;
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

void Material::mostrar_material(){
    cout << "|" << setw(10) << this -> nombre_material << "|" << setw(10) << this -> cantidad << "|" << endl;
}

void Material::saludar(){
    cout << "Soy un/a " << this->nombre_material << " y me encuentro en el casillero consultado" << endl;
}

char Material::obtener_representacion(){
    char representacion = 'a';
    if(this -> nombre_material == "piedra"){
        representacion = 'S';
    }
    else if(this -> nombre_material == "madera"){
        representacion = 'W';
    }
    else if(this -> nombre_material == "metal"){
        representacion = 'I';
    }
    return representacion;
}