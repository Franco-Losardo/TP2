#include "../../archivos_h/materiales/madera.h"
#include <iostream>
using namespace std;

class Madera: public Material{
    Madera::Madera(string nombre_material, int cantidad){
        this->nombre_material = nombre_material;
        this->cantidad = cantidad;
    }
    void Madera::saludar(){
        cout << "Soy una madera y me encuentro en el casillero consultado" << endl;
    }
};
