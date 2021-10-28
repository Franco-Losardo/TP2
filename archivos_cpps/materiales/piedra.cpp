#include "../../archivos_h/materiales/piedra.h"
#include <iostream>
using namespace std;

class Piedra: public Material{
    void Piedra::saludar(){
        cout << "Soy una piedra y me encuentro en el casillero consultado" << endl;
    }
};
