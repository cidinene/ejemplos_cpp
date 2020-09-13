#pragma once
#include "VPersonaje.hpp"

class Superheroe : public VPersonaje
{
protected:
    double ptosSalvacion;

public:
    Superheroe(char *nombre, double vida, double puntosSalvacion);
    Superheroe(char *nombre);
    virtual void showSuperpoderes();
    virtual void perderVida();
    ~Superheroe();
};