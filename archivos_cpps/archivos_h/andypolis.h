#ifndef ANDYPOLIS_H
#define ANDYPOLIS_H
#include "constantes.h"
#include "system.h"
#include "inventario.h"
#include "edificios.h"
#include "mapa.h"

class Andypolis{
    private:
        Mapa mapa;
        Inventario inventario;

    public:
        // PRE: -
        // POS: Construye un Objeto Andypolis
        Andypolis();

        // PRE:
        // POS:
        void cargar_edificios();
        
        // PRE:
        // POS:
        void cargar_ubicaciones();

        //PRE: -
        // POS: Guarda los nuevos datos de los edificios
        void guardar_edificios();

        // PRE: 
        // POS:
        void guardar_y_salir();

        // PRE: 
        // POS: 
        int pedir_opcion();//despues vemos bien los parametros

        // PRE:
        // POS:
        void elegir_opcion();

        // PRE:
        // POS:
        void construir_edificio_por_nombre();

        // PRE: -
        // POS: Muetra por pantalla la lista de edificios construidos
        void listar_edificios_construidos();

        // PRE: -
        // POS: Muestra por pantalla la lista de edficios disponibles y sus características
        void listar_todos_edificios();
        
        // PRE:
        // POS:
        void demoler_edificio_por_coordenada();

        // PRE:
        // POS:
        void consultar_coordenada();

        // PRE:
        // POS:
        void recolectar_recursos_perdidos();

        // PRE:
        // POS:
        void lluvia_de_recursos();
};

#endif
