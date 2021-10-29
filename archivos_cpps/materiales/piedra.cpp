#include "../../archivos_h/materiales/piedra.h"
#include <iostream>
using namespace std;

class Piedra: public Material{
    Piedra::Piedra(string nombre_material, int cantidad){
        this->nombre_material = nombre_material;
        this->cantidad = cantidad;
    }
    void Piedra::saludar(){
        cout << "Soy una piedra y me encuentro en el casillero consultado" << endl;
    }
};
