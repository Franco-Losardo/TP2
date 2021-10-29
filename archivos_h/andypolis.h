#ifndef ANDYPOLIS_H
#define ANDYPOLIS_H
#include "constantes.h"
#include "edificios.h"
#include "material.h"
#include "mapa.h"
#include "casilleros/casillero_construible.h"
#include "casilleros/casillero_transitable.h"
#include "casilleros/casillero_inaccesible.h"
#include "materiales/piedra.h"
#include "materiales/madera.h"
#include "materiales/metal.h"

class Andypolis{
    private:
    int cantidad_de_materiales;
    Mapa mapa;
    Material* materiales; //no estoy seguro de este puntero

    public:
    
    // PRE: -
    // POS: Construye un Objeto Andypolis
    Andypolis();
    
    // PRE:
    // POS:
    void cargar_mapa();
    
    // PRE:
    // POS:
    void cargar_materiales();

    // PRE:
    // POS:
    void cargar_edificios();
    
    // PRE:
    // POS:
    void cargar_ubicaciones();

    // PRE:
    // POS:
    void mostrar_mapa();

    // PRE: Recibe un entero positivo
    // POS: Redimensiona el arreglo de materiales
    void redimensionar_materiales(int nueva_longitud);

    //PRE: -
    // POS: Guarda los nuevos datos de los materiales
    void guardar_materiales();

    //PRE: -
    // POS: Guarda los nuevos datos de los edificios
    void guardar_edificios();

    // PRE: 
    // POS:
    void guardar_y_salir();

    // PRE: 
    // POS: 
    int pedir_opcion();//despues vemos bien los parametros

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
    
    // PRE: -
    // POS: Muestra por pantalla la lista de materiales disponibles
    void mostrar_inventario();

    // PRE:
    // POS:
    void recolectar_recursos_perdidos();

    // PRE:
    // POS:
    void lluvia_de_recursos();
};

#endif
