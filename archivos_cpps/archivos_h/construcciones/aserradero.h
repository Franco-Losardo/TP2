#ifndef ASERRADERO_H
#define ASERRADERO_H
#include "../edificios.h"
#include <iostream>

class Aserradero: public Edificio{
    public:
        int brindar_materiales();
        void mostrar_saludo();
};



#endif