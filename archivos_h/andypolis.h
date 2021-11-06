#ifndef ANDYPOLIS_H
#define ANDYPOLIS_H
#include "constantes.h"
#include "system.h"
#include "inventario.h"
#include "edificios.h"
#include "mapa.h"
#include "construcciones/aserradero.h"
#include "construcciones/fabrica.h"
#include "construcciones/mina.h"
#include "construcciones/obelisco.h"
#include "construcciones/escuela.h"
#include "construcciones/planta_electrica.h"

class Andypolis{
    private:
        Mapa mapa;
        Inventario inventario;
        Edificio** edificios_disponibles;
        int cantidad_edificios;

    public:
    
        // PRE: -
        // POS: Construye un Objeto Andypolis
        Andypolis();
        
        // PRE:
        // POS:
        void cargar_edificios_disponibles();
        
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
        void redimensionar_arreglo_edificios(int nueva_longitud);

        // PRE:
        // POS:
        void agregar_edificio_construido(Edificio* edificio);

        // PRE:
        // POS:
        void redimensionar_arreglo_edificios_construidos(int nueva_longitud);

        // PRE:
        // POS:
        bool existe_el_edificio(string edificio);

        // PRE:
        // POS:
        void agregar_edificio_a_vector(int numero_edificio, string nombre, int piedra, int madera, int metal, int permitidos);

        // PRE:
        // POS:
        void consultar_coordenada();

        // PRE:
        // POS:
        void mostrar_mapa();

        // PRE:
        // POS:
        void devolver_mitad_materiales(string nombre_edificio);

        // PRE:
        // POS:
        void cargar_construidos();

        // PRE:
        // POS:
        void llueve_piedra(int cantidad);

        // PRE:
        // POS:
        void llueve_madera(int cantidad);

        // PRE:
        // POS:
        void llueve_metal(int cantidad);

        // PRE:
        // POS:
        void mostrar_inventario();
        
        // PRE:
        // POS:
        void mostrar_nombres_de_edificios();
        
        // PRE:
        // POS:
        bool hay_materiales_suficientes(string edificio_a_construir);
        
        // PRE:
        // POS:
        int posicion_del_edifcio(string edificio_a_construir);
        
        // PRE:
        // POS:
        bool pedir_confirmacion(string edificio_a_construir);
        
        // PRE:
        // POS:
        int* pedir_coordenadas();
        
        // PRE:
        // POS:
        Edificio* crear_edificio(string nombre_edificio, int coord_x, int coord_y);
        
        // PRE:
        // POS:
        bool se_puede_construir(int coord_x, int coord_y);
        
        // PRE:
        // POS:
        void actualizar_cant_materiales(int pos_edificio);
        
        // PRE:
        // POS:
        int* obtener_materiales_necesarios(int pos_edificio);
        
        // PRE:
        // POS:
        bool se_alcanzo_maximo_permitido(string edificio_a_construir);

        // PRE: 
        // POS: 
        int pedir_opcion();//despues vemos bien los parametros

        // PRE:
        // POS:
        void construir_edificio_por_nombre();

        // PRE:
        // POS:
        string pedir_nombre_de_edificio();

        // POS:
        // PRE:
        int* obtener_posiciones_de_materiales();

        // PRE:
        // POS:
        void validar_nombre_de_edificio(string edificio_a_construir);

        // PRE:
        // POS:
        void validar_entrada_para_demoler(int coord_x, int coord_y);

        // PRE:
        // POS:
        void mostrar_construidos(int construidos, int** ubicaciones);

        // PRE:
        // POS:
        void mostrar_ubicaciones(int construidos, int** ubicaciones);

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
        void recolectar_recursos_producidos();

        // PRE:
        // POS:
        void lluvia_de_recursos();

        // PRE:
        // POS:
        void elegir_opcion();

        ~Andypolis();
};

#endif
