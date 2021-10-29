#ifndef CASILLERO_H
#define CASILLERO_H

class Casillero{
    protected:
    int coord_x;
    int coord_y;
    public:
    // PRE:
    // POS:
    Casillero();
    
    // PRE:
    // POS:
    Casillero(int coordenada_x, int coordenada_y);

    virtual void mostrar() = 0;
};


#endif
