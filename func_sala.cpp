#include "nave.h"

int sala::getDano(){

	return dano;
}

int sala::getIntegridade(){

	return integridade;
}

int sala::getOxigenio(){

	return oxigenio;
}

int sala::getSaude(){

	return saude;
}

void sala::setDano(int dano){

	this->dano = dano;
}

void sala::setIntegridade(int integridade){

	this->integridade = integridade;
}

void sala::setOxigenio(int oxigenio){

	this->oxigenio = oxigenio;
}

void sala::setSaude(int saude){

	this->saude = saude;
}


void sala::atacaEnimigoRandom(const int &a, const crew_member &atacante){

	int r = rand() % 10;   //random nº de 0 a 9
	for (auto p = entidades_sala.begin(); p != entidades_sala.end(); p++) {
			//dps acabo isto, tou farto de trabalhar hj xD
	}
}