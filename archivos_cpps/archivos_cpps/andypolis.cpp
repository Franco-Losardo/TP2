#include "../archivos_h/andypolis.h"

using namespace std;

Andypolis::Andypolis() {
    this -> inventario.cargar_inventario();
    this -> mapa.cargar_mapa();
}

void Andypolis::guardar_y_salir() {
    this -> inventario.guardar_inventario();
    guardar_edificios();
}

int Andypolis::pedir_opcion() {
    int opcion_ingresada = 0;
    cout << endl;
    cout << "1. Construir edificio por nombre" << endl;
    cout << endl;
    cout << "2. Listar los edificios construidos" << endl;
    cout << endl;
    cout << "3. Listar todos los edificios" << endl;
    cout << endl;
    cout << "4. Demoler un edificio por coordenada" << endl;
    cout << endl;
    cout << "5. Mostrar mapa" << endl;
    cout << endl;
    cout << "6. Consultar coordenada" << endl;
    cout << endl;
    cout << "7. Mostrar inventario" << endl;
    cout << endl;
    cout << "8. Recolectar recursos producidos" << endl;
    cout << endl;
    cout << "9. Lluvia de recursos" << endl;
    cout << endl;
    cout << "10. Guardar y salir" << endl;
    cout << "Ingrese la opcion deseada: ";
    cin >> opcion_ingresada;
    system(CLR_SCREEN);
    return opcion_ingresada;
}

void Andypolis::elegir_opcion() {
    int opcion_ingresada = pedir_opcion();
    switch (opcion_ingresada) {
        case 1:
            construir_edificio_por_nombre();
            break;

        case 2:
            listar_edificios_construidos();
            break;

        case 3:
            listar_todos_edificios();
            break;

        case 4:
            demoler_edificio_por_coordenada();
            break;

        case 5:
            this -> mapa.mostrar_mapa();
            break;

        case 6:
            consultar_coordenada();
            break;

        case 7:
            this -> inventario.mostrar_inventario();
            break;

        case 8:
            recolectar_recursos_perdidos();
            break;

        case 9:
            lluvia_de_recursos();
            break;

        case 10:
            guardar_y_salir();
            break;

        default:
            cout << COLOR_ROJO << "Oops, opcion incorrecta. Intenta nuevamente" << COLOR_POR_DEFECTO << endl;
            break;
    }
}

