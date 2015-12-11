#include "sala_maquinas_prop1.h"

sala_maquinas_esq::sala_maquinas_esq()
{
}

sala_maquinas_esq::~sala_maquinas_esq()
{
}

int sala_maquinas_esq::getPropulsor() const{

	return propulsor;
}

void sala_maquinas_esq::setPropulsor(const int &propulsor){
	this->propulsor = propulsor;
}

string sala_maquinas_esq::toString() const {

	ostringstream os;

	os << "Sala: Oxigenio: " << this->getOxigenio() << " | Integridade: " << this->getIntegridade() << " |  Propulsor Esquerdo: " << this->getPropulsor() << endl;

	return os.str();
}