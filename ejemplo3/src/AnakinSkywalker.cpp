#pragma once
#include <iostream>
using namespace std;
#include "AnakinSkywalker.hpp"

AnakinSkywalker::AnakinSkywalker() : Supervillano("Darth Vader"), Superheroe("SkyWalker")
{
    this->nombre = "Darth Vader";
    this->vida = 80;
};
void AnakinSkywalker::showSuperpoderes()
{
    cout << "Todavia no tengo definido si soy supervillano o superheroe" << endl;
    cout << "Tengo ptos salvacion:" << this->ptosSalvacion << endl;
    cout << "Tengo ptos muerte:" << this->ptosMuerte << endl;
};
void AnakinSkywalker::perderVida()
{
    this->vida = --this->vida;
};
AnakinSkywalker::~AnakinSkywalker(){};
