#include "../../archivos_h/construcciones/mina.h"
#include "../../archivos_h/constantes.h"

int Mina::brindar_materiales(){
    return BRINDAR_MATERIALES_MINA;
}
void Mina::mostrar_saludo(){
    cout << "Soy una mina y me encuentro en el casillero consultado" << endl;
}