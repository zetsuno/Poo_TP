#include <iostream>
#include <string>
#include <sstream>
#include "sala.h"

using namespace std;

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
