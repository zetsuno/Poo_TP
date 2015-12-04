#include <iostream>
#include <string>
#include <sstream>
#include "tripulantes.h"

using namespace std;

int tripulante::getDano(){

	return dano;
}

int tripulante::getVida(){

	return vida;
}

void tripulante::setDano(int dano){

	this->dano = dano;
}

void tripulante::setVida(int vida){

	this->vida = vida;
}