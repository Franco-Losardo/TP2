#ifndef EDIFICIOS_H
#define EDIFICIOS_H
#include <iostream>
#include <string>
#include <algorithm>
#include "constantes.h"
using namespace std;
class Edificio{
    protected:
        // Atributos
        string nombre;
        int* materiales_necesarios;
        int cantidad_permitida;
        int* coordenadas;
        string representacion;

    public:
        Edificio();
        //Metodos

        // PRE:
        // POS:
        string obtener_nombre();

        // PRE:
        // POS:
        int obtener_cantidad_permitida();

        // PRE:
        // POS:
        int* obtener_materiales_necesarios();

        // PRE:
        // POS:
        int* obtener_ubicacion();
        
        // PRE:
        // POS:
        string obtener_representacion();
        
        // PRE:
        // POS:
        virtual int brindar_materiales() = 0;


        // PRE:
        // POS:
        virtual void mostrar_saludo() = 0;
        
        // PRE:
        // POS:
        virtual int obtener_construidos() = 0;
        
        // PRE:
        // POS:
        virtual void mostrar_edificio() = 0;

        // PRE:
        // POS:
        ~Edificio();
};

#endif