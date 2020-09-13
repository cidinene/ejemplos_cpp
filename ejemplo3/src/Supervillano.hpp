#pragma once
#include "VPersonaje.hpp"

class Supervillano : public VPersonaje
{
protected:
    double ptosMuerte;

public:
    Supervillano(char *nombre, double vida, double puntosMuerte);
    Supervillano(char *nombre);
    virtual void showSuperpoderes();
    virtual void perderVida();
    ~Supervillano();
};