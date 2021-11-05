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
        //tal vez nos convenga q los materiales tengas coordenadas?

    public:
        Material(string tipo_material, int cantidad);
        Material();
        // Métodos
        
        // PRE: Recibe un entero
        // POS: Le suma cantidad al material en cuestion
        void establecer_cantidad(int cantidad);

        // PRE: -
        // POS: Devuelve el tipo del material
        string obtener_tipo();

        // PRE: -
        // POS: Devuelve la cantidad del material
        int obtener_cantidad();

        // PRE: Recibe un entero positivo
        // POS: Le resta la cantidad recibida a la cantidad de material
        void usar_material(int cantidad_necesaria);

        // PRE: -
        // POS: Muestra por pantalla los atributos del material
        void mostrar_material();

        // PRE:
        // POS:
        void saludar();

        // PRE:
        // POS:
        char obtener_representacion();
};

#endif
