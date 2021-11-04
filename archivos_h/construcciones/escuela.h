#ifndef ESCUELA_H
#define ESCUELA_H
#include "../edificios.h"
#include <iostream>

class Escuela: public Edificio{
    private:
        static int cantidad_construidos;

    public:
        Escuela(std::string nombre, int piedra_necesaria, int madera_necesaria, int metal_necesario, int permitidos);

        Escuela(std::string nombre, int coord_x, int coord_y);
        
        // PRE:
        // POS:
        int brindar_materiales();

        // PRE:
        // POS:
        void mostrar_saludo();

        int obtener_construidos();

        ~Escuela();
};

#endif