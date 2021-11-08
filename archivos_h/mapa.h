#ifndef MAPA_H
#define MAPA_H
#include "constantes.h"
#include "casilleros/casillero_construible.h"
#include "casilleros/casillero_transitable.h"
#include "casilleros/casillero_inaccesible.h"

class Mapa {
    private:
        int cantidad_filas;
        int cantidad_columnas;
        Casillero*** mapa;

    public:
        // PRE:
        // POS:
        Mapa();

        // PRE:
        // POS:
        void crear_mapa();

        // PRE:
        // POS:
        void cargar_mapa();
        
        // PRE:
        // POS:
        bool esta_ocupado(int coord_x, int coord_y);
        
        // PRE:
        // POS:
        void ocupar_casillero(Edificio* edificio, Material* material, int coord_x, int coord_y);

        // PRE:
        // POS:
        void liberar_posicion(int coordenada_x, int coordenada_y);

        // PRE:
        // POS:
        bool se_puede_construir(int coord_x, int coord_y);

        // PRE:
        // POS:
        bool coordenadas_fuera_de_rango(int coord_x, int coord_y);

        // PRE:
        // POS:
        void consultar_coordenada(int coord_x, int coord_y);

        // PRE:
        // POS:
        bool es_posible_insertar_materiales(int cantidad_a_insertar);

        // PRE:
        // POS:
        int* generar_coordenadas_validas();

        // PRE:
        // POS:
        Edificio* obtener_elemento(int coord_x , int coord_y);

        // PRE:
        // POS:
        void mostrar_mapa();

        // PRE:
        // POS:
        ~Mapa();
};

#endif