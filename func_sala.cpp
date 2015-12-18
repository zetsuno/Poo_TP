#include "utils.h"




sala::sala()
{
	this->id = id_sala;
	id_sala++;
	this->oxigenio = SALA_OXI;
	this->integridade = SALA_INT;
	cout << "A construir uma sala";
}

sala::~sala()
{	
	for (unsigned int k = 0; k<pessoas_sala.size(); k ++ ) {
		if (pessoas_sala[k] != nullptr) {
			pessoas_sala.erase(pessoas_sala.begin() + (k - 1));
		}
	}
	cout << " A a apagar uma sala" << endl;
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
