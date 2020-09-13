#pragma once

class VPersonaje
{
public:
    VPersonaje(char *nombre, double vida);
    virtual void showSuperpoderes() = 0;
    virtual void perderVida() = 0;

protected:
    char *nombre;
    double vida;
};