#ifndef MATERIAL_H
#define MATERIAL_H

#include <iostream>
#include <iomanip>
#include <string>


using namespace std;

class Material{
    private:
    // Atributos
    string nombre_material; // Tipo de material
    int cantidad;

    public:
    // Métodos

    // PRE: -
    // POS: Construye un objeto Material
    Material();

    // PRE: Recibe el tipo de material y la cantidad del material (entero positivo)
    // POS: Construye un objeto Material
    Material(string nombre_material, int cantidad);

    // PRE: -
    // POS: Devuelve el tipo del material
    string obtener_tipo();

    // PRE: -
    // POS: Devuelve la cantidad del material
    int obtener_cantidad();

    // PRE: Recibe un entero positivo
    // POS: Le resta la cantidad recibida a la cantidad de material
    void usar_material(int cantidad_necesaria);

    // PRE: Recibe un entero positivo
    // POS: Le suma la cantidad reibida a la cantidad de material
    void devolver_material(int cantidad_a_devolver);

    // PRE: -
    // POS: Muestra por pantalla los atributos del material
    void mostrar_material();

    // PRE:
    // POS:
    void saludar();
};

#endif
