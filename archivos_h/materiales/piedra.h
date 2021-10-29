#include "../material.h"

class Piedra: public Material{
    public:
    Piedra(string nombre_material, int cantidad);//si no lo definia no andaba
    void saludar();
};
