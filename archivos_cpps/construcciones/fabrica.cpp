#include "../../archivos_h/construcciones/fabrica.h"
#include "../../archivos_h/constantes.h"

int Fabrica::brindar_materiales(){
    return BRINDAR_MATERIALES_FABRICA;
}
void Fabrica::mostrar_saludo(){
    cout << "Soy una fabrica y me encuentro en el casillero consultado" << endl;
}
