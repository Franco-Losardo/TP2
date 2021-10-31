#ifndef INVENTARIO_H
#define INVENTARIO_H
#include "constantes.h"
#include "materiales/piedra.h"
#include "materiales/madera.h"
#include "materiales/metal.h"

class Inventario {
    private:
        Material** inventario;
        int cantidad_materiales;

    public:
        // PRE:
        // POS:
        Inventario();

        // PRE:
        // POS:
        void cargar_inventario();

        // PRE:
        // POS:
        void guardar_inventario();

        // PRE:
        // POS:
        void redimensionar_inventario(int nueva_longitud);

        // PRE:
        // POS:
        Material** obtener_inventario();

        // PRE:
        // POS:
        int obtener_cantidad_materiales();

        // PRE:
        // POS:
        void mostrar_inventario();

        // PRE:
        // POS:
        ~Inventario();
};

#endif