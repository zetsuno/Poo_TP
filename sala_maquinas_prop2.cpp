#include "sala_maquinas_prop2.h"

sala_maquinas_dir::sala_maquinas_dir()
{
}

sala_maquinas_dir::~sala_maquinas_dir()
{
}

int sala_maquinas_dir::getPropulsor() const{

	return propulsor;
}

void sala_maquinas_dir::setPropulsor(const int &propulsor){
	this->propulsor = propulsor;
}

string sala_maquinas_dir::toString() const {

	ostringstream os;

	os << "Sala: Oxigenio: " << this->getOxigenio() << " | Integridade: " << this->getIntegridade() << endl;

	return os.str();
}