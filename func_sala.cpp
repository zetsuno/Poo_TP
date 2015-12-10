#include "nave.h"

sala::sala()
{
}

sala::~sala()
{
}

int sala::getDano() const{

	return dano;
}

int sala::getIntegridade() const{

	return integridade;
}

int sala::getOxigenio() const{

	return oxigenio;
}

int sala::getSaude() const{

	return saude;
}

void sala::setDano(const int &dano){

	this->dano = dano;
}

void sala::setIntegridade(const int &integridade){

	this->integridade = integridade;
}

void sala::setOxigenio(const int &oxigenio){

	this->oxigenio = oxigenio;
}

void sala::setSaude(const int &saude){

	this->saude = saude;
}


void sala::atacaEnimigoRandom(const int &a, const crew_member &atacante){

	int r = rand() % 10;   //random nº de 0 a 9
	for (auto p = pessoas_sala.begin(); p != pessoas_sala.end(); p++) {
			//dps acabo isto, tou farto de trabalhar hj xD
	}
}