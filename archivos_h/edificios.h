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
        string representacion;

    public:
        // Constructor
        Edificio();
        //Metodos

        // PRE:
        // POS: devuelve el nombre del edificio
        string obtener_nombre();

        // PRE:
        // POS: devuelve la cantidad permitida del edificio en cuestion
        int obtener_cantidad_permitida();

        // PRE:
        // POS: devuelve un puntero a los materiales necesario del edificio en cuestion
        int* obtener_materiales_necesarios();
        
        // PRE:
        // POS: devuelve la representacion del edificio en cuestion
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
        virtual int** obtener_ubicaciones() = 0;
        
        // PRE:
        // POS:
        virtual void mostrar_edificio() = 0;

        // PRE:
        // POS:
        virtual ~Edificio();
};

#endif