#include "../material.h"

class Madera: public Material{
    public:
    Madera(string nombre_material, int cantidad); //si no lo definia no andaba
    void saludar();
};