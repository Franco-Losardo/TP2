#ifndef ASERRADERO_H
#define ASERRADERO_H
#include "../edificios.h"
#include <iostream>

class Aserradero: public Edificio {
    private:
        static int cantidad_construidos;

    public:
        Aserradero(string nombre, int piedra_necesaria, int madera_necesaria, int metal_necesario, int permitidos);
        Aserradero(string nombre, int coord_x, int coord_y);

        // PRE:
        // POS:
        int brindar_materiales();

        // PRE:
        // POS:
        void mostrar_saludo();
        
        // PRE:
        // POS:
        int obtener_construidos();
        
        // PRE:
        // POS:
        void mostrar_edificio();

        ~Aserradero();
};



#endif