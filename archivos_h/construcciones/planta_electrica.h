#ifndef PLANTA_ELECTRICA_H
#define PLANTA_ELECTRICA_H
#include "../edificios.h"
#include <iostream>

class Planta_electrica: public Edificio{
    private:
        static int cantidad_construidos;

    public:
        Planta_electrica(std::string nombre, int piedra_necesaria, int madera_necesaria, int metal_necesario, int permitidos);
        Planta_electrica(std::string nombre, int coord_x, int coord_y);

        // PRE:
        // POS:
        int brindar_materiales();

        // PRE:
        // POS:
        void mostrar_saludo();


        int obtener_construidos();

        ~Planta_electrica();
};

#endif