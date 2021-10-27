#include <iostream>
#include <fstream>
#include "../archivos_h/system.h"
#include "../archivos_h/andypolis.h"


using namespace std;

Andypolis::Andypolis(){
    this -> materiales = new Material[MATERIALES_DISPONIBLES_MINIMO];
    //this -> edificios = new Edificio[EDIFICIOS_DISPONIBLES_MINIMO];
    this -> cantidad_de_materiales = 0;
    this -> cantidad_de_edificios = 0;
    cargar_materiales_iniciales();
    //cargar_edificios_iniciales();
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

/*

* EDIFICIOS: (NO ESTA DEFINIDO) sería un arreglo de objetos Edificio
* cantidad_de_edificios: es un contador, para saber la cantidad de edificios disponibles en el juego
* UBICACION: (NO ESTA DEFINIDO) sería un arreglo de enteros, ejemplo: {2, 3}

*/

void Andypolis::cargar_materiales_iniciales(){
    ifstream archivo_materiales(RUTA_MATERIALES);
    if (!archivo_materiales){
        cout << COLOR_ROJO << "El archivo de materiales no existe. Para continuar, crealos y volve a correr el programa." << COLOR_POR_DEFECTO << endl;
        exit(1);
    }
    string nombre_material;
    string cantidad;
    while(getline(archivo_materiales, nombre_material, DELIMITADOR)){
        getline(archivo_materiales, cantidad);
        this -> materiales[this -> cantidad_de_materiales] = Material(nombre_material, stoi(cantidad));
        this -> cantidad_de_materiales++;
        if (this -> cantidad_de_materiales == MATERIALES_DISPONIBLES_MINIMO){
            redimensionar_materiales(this -> cantidad_de_materiales * 2);
        }
    }
    archivo_materiales.close();
    redimensionar_materiales(this -> cantidad_de_materiales);
}


void Andypolis::redimensionar_materiales(int nueva_longitud){
    Material *nuevo_arreglo_materiales = new Material[nueva_longitud];
    for (int i = 0; i < this-> cantidad_de_materiales; i++){
        nuevo_arreglo_materiales[i] = this -> materiales[i];
    }
    delete[] this -> materiales;
    this -> materiales = nuevo_arreglo_materiales;
}

void Andypolis::mostrar_inventario(){
    for (int i = 0; i < this -> cantidad_de_materiales; i++){
        materiales[i].mostrar_material();
    }
}

void Andypolis::guardar_materiales(){
    ofstream archivo_materiales(RUTA_MATERIALES);
    for (int i = 0; i < this -> cantidad_de_materiales; i++){
        string nombre_material = this -> materiales[i].obtener_tipo();
        int cantidad = this -> materiales[i].obtener_cantidad();
        archivo_materiales << nombre_material << DELIMITADOR << cantidad << endl;
    }
    archivo_materiales.close();
}
/* Habria que modificarlo para que los guarde recorriendo el mapa
void Andypolis::guardar_edificios(){
    ofstream archivo_materiales(RUTA_UBICACIONES);
    for (int i = 0; i < this -> cantidad_de_edificios; i++){
        string nombre_edificio = this -> edificios[i].obtener_nombre();
        int* coordenadas = this -> edificios[i].obtener_ubicacion();
        int coord_x, coord_y = coordenadas[0], coordenadas[1];
        archivo_materiales << nombre_edificio << DELIMITADOR << "(" << coord_x << DELIMITADOR << ", " << coord_y << ")" << endl;
    }
    archivo_materiales.close();
    
}*/

void Andypolis::guardar_y_salir(){
    guardar_materiales();
    guardar_edificios();
}
