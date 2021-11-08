#ifndef ESCUELA_H
#define ESCUELA_H
#include "../edificios.h"
#include <iostream>

class Escuela: public Edificio{
    private:
        static int cantidad_construidos;
        static int** ubicaciones;

    public:
        // Constructores
        Escuela(std::string nombre, int piedra_necesaria, int madera_necesaria, int metal_necesario, int permitidos);

        Escuela(std::string nombre, int coord_x, int coord_y);

        // PRE:
        // POS: devuelve la cantidad de material que corresponda
        int brindar_materiales();

        // PRE:
        // POS: muestra el saludo del edificio
        void mostrar_saludo();
        
        // PRE:
        // POS: devuelve la cantidad de edificios construidos de este tipo
        int obtener_construidos();

        // PRE:
        // POS: muestra las caracteristicas del edificio(materiales, construidos, cuántos mas se puede construir y si brinda materiales o no)
        void mostrar_edificio();

        // PRE:
        // POS: devuelve un doble puntero al vector que contiene los subvectores donde estan las ubicaciones
        int** obtener_ubicaciones();

        // PRE:
        // POS:
        void demoler(int coordenada_x, int coordenada_y);

        // Destructor
        ~Escuela();
};

#endif