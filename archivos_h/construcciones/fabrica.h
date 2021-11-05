#ifndef FABRICA_H
#define FABRICA_H
#include "../edificios.h"
#include <iostream>

class Fabrica: public Edificio{
    private:
        static int cantidad_construidos;
    public:
        Fabrica(std::string nombre, int piedra_necesaria, int madera_necesaria, int metal_necesario, int permitidos);

        Fabrica(std::string nombre, int coord_x, int coord_y);

        // PRE:
        // POS:
        int brindar_materiales();

        // PRE:
        // POS:
        void mostrar_saludo();

        int obtener_construidos();

        // PRE:
        // POS:
        void mostrar_edificio();

        ~Fabrica();
};

#endif