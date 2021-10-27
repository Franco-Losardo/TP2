#ifndef ANDYPOLIS_H
#define ANDYPOLIS_H
#include "constantes.h"
#include "edificios.h"
#include "material.h"

class Andypolis{
    private:
    int cantidad_de_materiales, cantidad_de_edificios;
    Material* materiales;
    Edificio* edificios;

    // PRE:
    // POS:
    void cargar_materiales_iniciales();

    // PRE:
    // POS:
    void cargar_edificios_iniciales();
    
    // PRE:
    // POS:
    void cargar_ubicaciones_iniciales();

    // PRE: Recibe un entero positivo
    // POS: Redimensiona el arreglo de materiales
    void redimensionar_materiales(int nueva_longitud);

    // PRE: Recibe un entero positivo
    // POS: Redimensiona el arreglo de edificios
    void redimensionar_edificios(int nueva_longitud);

    //PRE: -
    // POS: Guarda los nuevos datos de los materiales
    void guardar_materiales();

    //PRE: -
    // POS: Guarda los nuevos datos de los edificios
    void guardar_edificios();

    // PRE: 
    // POS:
    void guardar_y_salir();

    public:

    // PRE: -
    // POS: Construye un Objeto Andypolis
    Andypolis();

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
    void mostrar_mapa();

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
