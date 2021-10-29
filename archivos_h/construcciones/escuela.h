#ifndef ESCUELA_H
#define ESCUELA_H
#include "../edificios.h"
#include <iostream>

class Escuela: public Edificio{
public:
    int brindar_materiales();
    void mostrar_saludo();
};

#endif