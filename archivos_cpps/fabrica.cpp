#include "../archivos_h/construcciones/fabrica.h"
#include "../archivos_h/constantes.h"

using namespace std;

int Fabrica::cantidad_construidos = 0;

Fabrica::Fabrica(string nombre, int piedra_necesaria, int madera_necesaria, int metal_necesario, int permitidos){
    this -> nombre = nombre;
    this -> cantidad_permitida = permitidos;
    this -> materiales_necesarios = new int[3];
    this -> materiales_necesarios[0] = piedra_necesaria;
    this -> materiales_necesarios[1] = madera_necesaria;
    this -> materiales_necesarios[2] = metal_necesario;
}

Fabrica::Fabrica(string nombre, int coord_x, int coord_y){
    this->nombre = nombre;
    this->representacion = nombre[0];
    this->cantidad_construidos++;
    this->coordenadas = new int[2];
    this->coordenadas[0] = coord_x;
    this->coordenadas[1] = coord_y;
}

int Fabrica::brindar_materiales() {
    return BRINDAR_MATERIALES_FABRICA;
}

void Fabrica::mostrar_edificio(){
    cout << "--> " << COLOR_VERDE_AGUA << this->nombre << COLOR_POR_DEFECTO << endl;
    cout << endl;
    cout << "Piedra requerida: " << this->materiales_necesarios[0] << endl;
    cout << "Madera requerida: " << this->materiales_necesarios[1] << endl;
    cout << "Metal requerido: " << this->materiales_necesarios[2] << endl;
    cout << "Construidos hasta el momento: " << this->cantidad_construidos << endl;
    cout << "Puede construir " << this->cantidad_permitida - this->cantidad_construidos << " mas" << endl;
    cout << "Brinda material: SI" << endl;
    cout << COLOR_MARRON << LINEA_DIVISORIA << COLOR_POR_DEFECTO << endl;
}

int Fabrica::obtener_construidos(){
    return this->cantidad_construidos;
}

void Fabrica::mostrar_saludo() {
    cout << COLOR_MARRON <<"Soy una fabrica y me encuentro en el casillero consultado" << COLOR_POR_DEFECTO <<endl;
}


Fabrica::~Fabrica(){
    delete[] materiales_necesarios;
    delete[] coordenadas;
}