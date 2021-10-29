#include "../material.h"

class Metal:  public Material{
    public:
    Metal(string nombre_material, int cantidad); //si no lo definia no andaba
    void saludar();
};
