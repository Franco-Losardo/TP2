#ifndef OBELISCO_H
#define OBELISCO_H
#include "../edificios.h"
#include <iostream>

class Obelisco: public Edificio{
    private:
        static int cantidad_construidos;
    public:
        Obelisco(std::string nombre, int piedra_necesaria, int madera_necesaria, int metal_necesario, int permitidos);
        Obelisco(std::string nombre, int coord_x, int coord_y);

        // PRE:
        // POS:
        int brindar_materiales();

        // PRE:
        // POS:
        void mostrar_saludo();

        int obtener_construidos();


        ~Obelisco();
};

#endif