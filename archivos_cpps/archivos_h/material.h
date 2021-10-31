#ifndef MATERIAL_H
#define MATERIAL_H

#include <iostream>
#include <iomanip>

class Material{
    protected:
        // Atributos
        std::string tipo_material; // Tipo de material
        int cantidad;
        //tal vez nos convenga q los materiales tengas coordenadas?

    public:
        // Métodos

        // PRE:
        // POS:
        void establecer_tipo(std::string tipo_material);

        // PRE:
        // POS:
        void establecer_cantidad(int cantidad);

        // PRE: -
        // POS: Devuelve el tipo del material
        std::string obtener_tipo();

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
        virtual void saludar() = 0;
};

#endif
