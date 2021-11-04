#include "../archivos_h/construcciones/escuela.h"

using namespace std;

Escuela::Escuela(string nombre, int piedra_necesaria, int madera_necesaria, int metal_necesario, int permitidos) {
    this -> nombre = nombre;
    this -> cantidad_permitida = permitidos;
    this -> materiales_necesarios = new int[3];
    this -> materiales_necesarios[0] = piedra_necesaria;
    this -> materiales_necesarios[1] = madera_necesaria;
    this -> materiales_necesarios[2] = metal_necesario;
}

Escuela::Escuela(string nombre, int coord_x, int coord_y){
    this->nombre = nombre;
    this->representacion = nombre[0];
    this->cantidad_construidos++;
    this->coordenadas = new int[2];
    this->coordenadas[0] = coord_x;
    this->coordenadas[1] = coord_y;
}


int Escuela::cantidad_construidos = 0;

int Escuela::obtener_construidos(){
    return this->cantidad_construidos;
}

int Escuela::brindar_materiales(){
    return 0;
}
void Escuela::mostrar_saludo(){
    cout << "Soy una escuela y me encuentro en el casillero consultado" << endl;
}


Escuela::~Escuela(){
    delete[] materiales_necesarios;
    delete[] coordenadas;
}