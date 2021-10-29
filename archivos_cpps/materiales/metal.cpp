#include "../../archivos_h/materiales/metal.h"
#include <iostream>
using namespace std;

class Metal: public Material{
    Metal::Metal(string nombre_material, int cantidad){
        this->nombre_material = nombre_material;
        this->cantidad = cantidad;
    }
    void Metal::saludar(){
        cout << "Soy un metal y me encuentro en el casillero consultado" << endl;
    }
};
