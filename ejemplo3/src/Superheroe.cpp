#pragma once
#include "Superheroe.hpp"
#include <iostream>
using namespace std;

#define MIN_VIDA_SUPERHEROE 5
#define MIN_PTOS_SALVACION 10

Superheroe::Superheroe(char *nombre, double vida, double puntosSalvacion) : VPersonaje(nombre, vida),
                                                                            ptosSalvacion{puntosSalvacion} {};
Superheroe::Superheroe(char *nombre) : VPersonaje(nombre, MIN_VIDA_SUPERHEROE),
                                       ptosSalvacion{MIN_PTOS_SALVACION} {};
void Superheroe::showSuperpoderes()
{
     cout << "Soy el superheroe '" << nombre << "' y me queda de  vida :" << vida << endl;
     cout << "Un golpe mío salva: " << ptosSalvacion << " vidas" << endl;
}
void Superheroe::perderVida()
{
     this->vida = this->vida - 1;
}

Superheroe::~Superheroe(){};
