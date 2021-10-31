#ifndef EDIFICIOS_H
#define EDIFICIOS_H

#include <string>
using namespace std;

class Edificio{
    protected:
        // Atributos
        string nombre;
        int* materiales_necesarios;
        int cantidad_permitida;
        int cantidad_construidos;
        int* coordenadas;
        bool ubicado; // para no cambiar las coordenadas de un edificio que ya fue posicionado, es decir, que ya se le asigno coord_x y coord_y

    public:
        //Metodos

        // PRE:
        // POS:
        Edificio();//al ser abstracto habria q sacar ambos constructores no?

        // PRE:
        // POS:
        Edificio(string nombre);

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
        void establecer_materiales_necesarios(int piedra_necesaria, int madera_necesaria, int metal_necesario);

        // PRE:
        // POS:
        void aumentar_construidos();

        // PRE:
        // POS:
        void establecer_ubicacion(int coord_x, int coord_y);

        // PRE:
        // POS:
        int* obtener_ubicacion();

        // PRE:
        // POS:
        bool esta_ubicado();

        // PRE:
        // POS:
        void cambiar_estado();

        // PRE:
        // POS:
        virtual int brindar_materiales() = 0;

        // PRE:
        // POS:
        virtual void mostrar_saludo() = 0;

};

#endif