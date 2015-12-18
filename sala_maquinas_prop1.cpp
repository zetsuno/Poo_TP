#include "utils.h"

sala_maquinas_esq::sala_maquinas_esq()
{
	this->propulsor = PROP_HP;
	cout << " do tipo: Propulsor_Esquerdo" << endl;
}

sala_maquinas_esq::~sala_maquinas_esq()
{
	cout << "do tipo: Propulsor_Esquerdo ";
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