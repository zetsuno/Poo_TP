#include "utils.h"

sala_escudo::sala_escudo()
{
	this->setTipo("Escudo");
	this->escudo = SHIP_SHIELD;
	cout << " do tipo: Escudo" << endl;

}

sala_escudo::~sala_escudo()
{
	cout << "do tipo: Escudo ";
}

int  sala_escudo::getEscudo() const{

	return escudo;
}

void sala_escudo::setEscudo(const int &escudo){

	this->escudo = escudo;
}

string sala_escudo::toString() const {

	ostringstream os;

	os << "Sala: Oxigenio: " << this->getOxigenio() << " | Integridade: " << this->getIntegridade() << " |  Escudo: " << this->getEscudo() << endl;

	return os.str();
}

void sala_escudo::disableShield() {

	this->escudo = NULL;
}