#include "../../archivos_h/casilleros/casillero_construible.h"
#include <iostream>

using namespace std;

bool Casillero_construible::esta_ocupado(){
    return (ocupado == true);
}

void Casillero_construible::mostrar(){
    if(this->ocupado){
        cout << "Soy un casillero construible y no me encuentro vacio" << endl;
        this->objeto->mostrar_saludo();
    }
    else{
        cout << "Soy un casillero construible y me encuentro vacío" << endl;
    }
}

void Casillero_construible::ocupar_casillero(Edificio* objeto){
    this->ocupado = true;
    this->objeto = objeto;
    objeto->establecer_ubicacion(this->coord_x, this->coord_y);
    objeto->cambiar_estado();//puede q no necesitemos este metodo
    objeto->aumentar_construidos();
}

char Casillero_construible::obtener_tipo(){
    return 'T';
}