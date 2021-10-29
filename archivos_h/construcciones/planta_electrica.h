#ifndef PLANTA_ELECTRICA_H
#define PLANTA_ELECTRICA_H
#include "../edificios.h"
#include <iostream>

class Planta_electrica: public Edificio{
public:
    int brindar_materiales();
    void mostrar_saludo();
};

#endif