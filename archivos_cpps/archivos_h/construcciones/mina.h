#ifndef MINA_H
#define MINA_H
#include "../edificios.h"
#include <iostream>

class Mina: public Edificio{
    public:
        int brindar_materiales();
        void mostrar_saludo();
};

#endif