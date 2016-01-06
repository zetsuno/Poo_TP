#include "utils.h"

sala_maquinas_dir::sala_maquinas_dir()
{
	this->setTipo("Propulsor_Direito");
	this->propulsor = PROP_HP;
	this->operada = false;
	cout << " do tipo: Propulsor_Direito" << endl;
}

sala_maquinas_dir::~sala_maquinas_dir()
{
	cout << "A destruir um Propulsor Direito... ";
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

int sala_maquinas_dir::getDistance() {

	return this->propulsor;
}