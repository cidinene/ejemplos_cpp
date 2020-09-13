#pragma once
#include "Supervillano.hpp"
#include "Superheroe.hpp"

class AnakinSkywalker : public Supervillano,public Superheroe
{

   char *nombre;
   double vida;
public:
    AnakinSkywalker();
    void showSuperpoderes();
    void perderVida();
    ~AnakinSkywalker();
};