#include "sala_escudo.h"

sala_escudo::sala_escudo()
{
}

sala_escudo::~sala_escudo()
{
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