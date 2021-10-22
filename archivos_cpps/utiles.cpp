#include <iostream>
#include <fstream>
#include "../archivos_h/system.h"


using namespace std;

int pedir_opcion() {
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

/*

* EDIFICIOS: (NO ESTA DEFINIDO) sería un arreglo de objetos Edificio
* NUMERO_EDIFICIOS: (NO ESTA DEFINIDO) sería un contador, para saber la cantidad de edificios disponibles en el juego
* UBICACION: (NO ESTA DEFINIDO) sería un arreglo de enteros, ejemplo: {2, 3}

*/

void cargar_edificios() {
    string nombre;
    int permitidos, materiales_necesarios[3];

    ifstream archivo(PATH_EDIFICIOS);
    while (archivo >> nombre) {
        for (int i = 0; i < 3; i++) {
            archivo >> materiales_necesarios[i];
        }
        archivo >> permitidos;
        EDIFICIOS[NUMERO_EDIFICIOS] = Edificio(nombre, permitidos, materiales_necesarios);
        NUMERO_EDIFICIOS++;

        if (NUMERO_EDIFICIOS == EDIFICIOS_DISPONIBLES_MINIMO) {
            redimensionar_edificios(NUMERO_EDIFICIOS * 2);
        }
    }
    archivo.close();
    redimensionar_edificios(NUMERO_EDIFICIOS);
}

void cargar_ubicaciones() {
    string nombre;
    UBICACION;

    ifstream archivo(PATH_UBICACIONES);
    while (archivo >> nombre) {
        archivo >> UBICACION;
        for (int i = 0; i < NUMERO_EDIFICIOS; i++) {
            if (nombre == EDIFICIOS[i].obtener_nombre()) {
                EDIFICIOS[i].establecer_ubicacion(UBICACION);
                EDIFICIOS[i].aumentar_construidos();
            }
        }
    }
}

void redimensionar_edificios(int nueva_longitud) {
    Edificio* nuevo_arreglo_edificios = new Edificio[nueva_longitud];
    for (int i = 0; i < NUMERO_EDIFICIOS; i++) {
        nuevo_arreglo_edificios[i] = edificios[i];
    }

    delete [] EDIFICIOS;
    EDIFICIOS = nuevo_arreglo_edificios;
}