#include "nave.h"




sala::sala()
{
	this->id = id_sala;
	id_sala++;
	this->oxigenio = SALA_OXI;
	this->integridade = SALA_INT;
	cout << "A construir uma sala" << endl;
}

sala::~sala()
{	
	for (unsigned i = 0; i<pessoas_sala.size(); i ++ ) {
		if (pessoas_sala[i] != nullptr) {
			pessoas_sala.erase(pessoas_sala.begin() + (i - 1));
		}
	}
	cout << "A a apagar uma sala" << endl;
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