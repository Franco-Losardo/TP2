#include "../../archivos_h/materiales/metal.h"
#include <iostream>
using namespace std;

class Metal: public Material{
    void Metal::saludar(){
        cout << "Soy un metal y me encuentro en el casillero consultado" << endl;
    }
};
