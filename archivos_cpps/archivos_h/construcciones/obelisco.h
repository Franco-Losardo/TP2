#ifndef OBELISCO_H
#define OBELISCO_H
#include "../edificios.h"
#include <iostream>

class Obelisco: public Edificio{
    public:
        int brindar_materiales();
        void mostrar_saludo();
};

#endif