#include "../archivos_h/construcciones/planta_electrica.h"

using namespace std;

int Planta_electrica::cantidad_construidos = 0;

Planta_electrica::Planta_electrica(string nombre, int piedra_necesaria, int madera_necesaria, int metal_necesario, int permitidos) {
    this -> nombre = nombre;
    this -> cantidad_permitida = permitidos;
    this -> materiales_necesarios = new int[3];
    this -> materiales_necesarios[0] = piedra_necesaria;
    this -> materiales_necesarios[1] = madera_necesaria;
    this -> materiales_necesarios[2] = metal_necesario;
}

Planta_electrica::Planta_electrica(string nombre, int coord_x, int coord_y){
    this->nombre = nombre;
    this->representacion = nombre[0];
    this->cantidad_construidos++;
    this->coordenadas = new int[2];
    this->coordenadas[0] = coord_x;
    this->coordenadas[1] = coord_y;
}

int Planta_electrica::brindar_materiales() {
    return 0;
}


int Planta_electrica::obtener_construidos(){
    return this->cantidad_construidos;
}

void Planta_electrica::mostrar_saludo() {
    cout << "Soy una planta electrica y me encuentro en el casillero consultado" << endl;
}


Planta_electrica::~Planta_electrica(){
    delete[] materiales_necesarios;
    delete[] coordenadas;
}