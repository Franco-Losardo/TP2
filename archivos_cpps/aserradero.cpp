#include "../archivos_h/construcciones/aserradero.h"
#include "../archivos_h/constantes.h"

using namespace std;

int Aserradero::cantidad_construidos = 0;

Aserradero::Aserradero(string nombre, int piedra_necesaria, int madera_necesaria, int metal_necesario, int permitidos) {
    this -> nombre = nombre;
    this -> cantidad_permitida = permitidos;
    this -> materiales_necesarios = new int[3];
    this -> materiales_necesarios[0] = piedra_necesaria;
    this -> materiales_necesarios[1] = madera_necesaria;
    this -> materiales_necesarios[2] = metal_necesario;
}

Aserradero::Aserradero(string nombre, int coord_x, int coord_y){
    this->nombre = nombre;
    this->representacion = nombre[0];
    this->cantidad_construidos++;
    this->coordenadas = new int[2];
    this->coordenadas[0] = coord_x;
    this->coordenadas[1] = coord_y;
}

int Aserradero::obtener_construidos(){
    return this->cantidad_construidos;
}

int Aserradero::brindar_materiales() {
    return BRINDAR_MATERIALES_ASERRADERO;
}

void Aserradero::mostrar_saludo() {
    cout << "Soy un aserradero y me encuentro en el casillero consultado" << endl;
}


Aserradero::~Aserradero() {
    delete[] materiales_necesarios;
    delete[] coordenadas;
}