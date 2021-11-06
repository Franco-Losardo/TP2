#ifndef INVENTARIO_H
#define INVENTARIO_H
#include "constantes.h"
#include "material.h"

class Inventario {
    private:
        int cantidad_materiales;
        Material* inventario;
    
    public:
        // PRE:
        // POS:
        Inventario();

        // PRE:
        // POS:
        int obtener_cantidad_materiales();

        // PRE:
        // POS:
        Material* obtener_inventario();

        // PRE:
        // POS:
        int posicion_del_material(string material);

        // PRE:
        // POS:
        void redimensionar_inventario(int nueva_longitud);

        // PRE:
        // POS:
        void mostrar_inventario();

        // PRE:
        // POS:
        void cargar_inventario();

        // PRE:
        // POS:
        void guardar_inventario();

        // PRE:
        // POS:
        ~Inventario();
};

#endif