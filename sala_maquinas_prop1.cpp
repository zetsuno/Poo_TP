#include "utils.h"

sala_maquinas_esq::sala_maquinas_esq()
{
	this->setTipo("Propulsor_Esquerdo");
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

void sala_maquinas_esq::mostra_info_sala(int x, int y,Consola &c)
{
	
	sala::mostra_info_sala(x, y,c);

	c.gotoxy(x + 8, y+2);

	cout << "P:" << this->propulsor;

	c.gotoxy(x+8,y+3);
	
}

int sala_maquinas_esq::getDistance() {

	return this->propulsor;
}