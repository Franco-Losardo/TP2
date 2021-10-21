#ifndef EDIFICIOS_H
#define EDIFICIOS_H

#include <string>

class Edificio {
    private:
        std::string nombre;
        int cantidad_permitida;
        int cantidad_construidos;
        int materiales_necesarios[3];
        UBICACIONES; // sería un arreglo de arreglos: {{2, 3}, {3, 5}}, cada subarreglo sería una ubicación
    
    public:
        // PRE:
        // POS:
        Edificio();

        // PRE:
        // POS:
        Edificio(std::string nombre, int cantidad_permitida, int* materiales_necesarios);

        // PRE:
        // POS:
        std::string obtener_nombre();

        // PRE:
        // POS:
        int obtener_cantidad_permitida();

        // PRE:
        // POS:
        int obtener_materiales_necesarios();

        // PRE: 
        // POS:
        void aumentar_construidos();

        // PRE:
        // POS:
        void establecer_ubicacion(UBICACION)
};

#endif