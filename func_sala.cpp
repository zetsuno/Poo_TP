#include "nave.h"


static int id_sala = 500;
sala::sala()
{

}

sala::~sala()
{
}


int sala::getIntegridade() const{

	return integridade;
}

int sala::getOxigenio() const{

	return oxigenio;
}

void sala::setIntegridade(const int &integridade){

	this->integridade = integridade;
}

void sala::setOxigenio(const int &oxigenio){

	this->oxigenio = oxigenio;
}


 string sala::toString() const {

	ostringstream os;

	os << "Sala: Oxigenio: " << this->getOxigenio() << " |  Integridade: " << this->getIntegridade() << endl;

	return os.str();
}
void sala::atacaEnimigoRandom(const int &a, const crew_member &atacante){

	int r = rand() % 10;   //random nº de 0 a 9
	for (auto p = pessoas_sala.begin(); p != pessoas_sala.end(); p++) {
			//dps acabo isto, tou farto de trabalhar hj xD
	}
}