#pragma once
#include "Supervillano.hpp"
#include <iostream>
using namespace std;

#define MIN_VIDA_SUPERVILLANO 3
#define MIN_PTOS_MUERTE 5

Supervillano::Supervillano(char *nombre, double vida, double puntosMuerte) : VPersonaje(nombre, vida),
                                                                             ptosMuerte{puntosMuerte} {};
Supervillano::Supervillano(char *nombre) : VPersonaje(nombre, MIN_VIDA_SUPERVILLANO),
                                           ptosMuerte{MIN_PTOS_MUERTE} {};
void Supervillano::showSuperpoderes()
{
     cout << "Soy el supervillano '" << nombre << "' y me queda de  vida :" << vida << endl;
     cout << "Un golpe mío mata: " << ptosMuerte << " vidas" << endl;
}
void Supervillano::perderVida()
{
     this->vida = this->vida - 1;
}

Supervillano::~Supervillano(){};
