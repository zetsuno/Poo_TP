#include "sala_maquinas_prop1.h"

sala_maquinas::sala_maquinas()
{
}

sala_maquinas::~sala_maquinas()
{
}

int sala_maquinas::getPropulsor() const{

	return propulsor;
}

void sala_maquinas::setPropulsor(const int &propulsor){
	this->propulsor = propulsor;
}