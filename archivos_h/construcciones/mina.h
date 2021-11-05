#ifndef MINA_H
#define MINA_H
#include "../edificios.h"
#include <iostream>

class Mina: public Edificio{
    private:
        static int cantidad_construidos;
    public:
        Mina(std::string nombre, int piedra_necesaria, int madera_necesaria, int metal_necesario, int permitidos);
        Mina(std::string nombre, int coord_x, int coord_y);

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

        ~Mina();
};

#endif