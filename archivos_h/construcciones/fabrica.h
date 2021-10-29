#ifndef FABRICA_H
#define FABRICA_H
#include "../edificios.h"
#include <iostream>

class Fabrica: public Edificio{
public:
    int brindar_materiales();
    void mostrar_saludo();
};

#endif