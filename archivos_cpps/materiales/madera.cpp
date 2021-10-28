#include "../../archivos_h/materiales/madera.h"
#include <iostream>
using namespace std;

class Madera: public Material{
    void Madera::saludar(){
        cout << "Soy una madera y me encuentro en el casillero consultado" << endl;
    }
};
