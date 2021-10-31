#include "../../archivos_h/casilleros/casillero_transitable.h"
#include <iostream>

using namespace std;

bool Casillero_transitable::esta_ocupado(){
    return (ocupado == true);
}

void Casillero_transitable::mostrar(){
    if (this->ocupado){
        cout << "Soy un casillero transitable y no me encuentro vacio" << endl;
        this->objeto->saludar();
    }
    else{
        cout << "Soy un casillero transitable y me encuentro vacío" << endl;
    }
}

void Casillero_transitable::ocupar_casillero(Material* objeto){
    this->ocupado = true;
    this->objeto = objeto;
}
char Casillero_transitable::obtener_tipo(){
    return 'C';
}