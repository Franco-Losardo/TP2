#ifndef MAPA_H
#define MAPA_H
#include "casillero.h"

class Mapa: public Casillero{
private:
    int cantidad_de_filas;//tal vez haya mas atributos
    int cantidad_de_columnas;
    int** matriz;

public:
    Mapa(int cantidad_de_filas, int cantidad_de_columnas);

    void cargar_mapa_inicial();
    void guardar_mapa();

    void redimensionar_mapa();//o es siempre fijo?
};


#endif