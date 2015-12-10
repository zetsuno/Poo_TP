#include "sala_vida.h"


sala_vida::sala_vida()
{
}

sala_vida::~sala_vida()
{
}

int sala_vida::getDano() const{

	return dano;
}


int sala_vida::getOxigenio() const{

	return oxigenio;
}

int sala_vida::getVida() const{

	return vida;
}

void sala_vida::setDano(const int &dano){

	this->dano = dano;
}


void sala_vida::setOxigenio(const int &oxigenio){

	this->oxigenio = oxigenio;
}

void sala_vida::setVida(const int &vida){

	this->vida = vida;
}