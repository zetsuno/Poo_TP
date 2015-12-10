#include "Sala_ponte.h"

sala_ponte::sala_ponte()
{
}

sala_ponte::~sala_ponte()
{
}

int sala_ponte::getDano() const{

	return dano;
}


int sala_ponte::getOxigenio() const{

	return oxigenio;
}

int sala_ponte::getVida() const{

	return vida;
}

int sala_ponte::getIntegridade() const{

	return integridade;
}

void sala_ponte::setDano(const int &dano){

	this->dano = dano;
}


void sala_ponte::setOxigenio(const int &oxigenio){

	this->oxigenio = oxigenio;
}

void sala_ponte::setVida(const int &vida){

	this->vida = vida;
}

void sala_ponte::setIntegridade(const int &integridade){

	this->integridade = integridade;
}