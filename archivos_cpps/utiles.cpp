#include <iostream>
#include "../archivos_h/system.h"

using namespace std;

int pedir_opcion(){
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