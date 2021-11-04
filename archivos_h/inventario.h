#ifndef INVENTARIO_H
#define INVENTARIO_H
#include "constantes.h"
#include "material.h"

class Inventario {
    private:
        int cantidad_materiales;
        Material* inventario;
    
    public:
        Inventario();

        int obtener_cantidad_materiales();

        Material* obtener_inventario();

        void redimensionar_inventario(int nueva_longitud);

        void mostrar_inventario();

        void cargar_inventario();

        void guardar_inventario();

        ~Inventario();
};

#endif