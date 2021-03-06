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

bool sala_maquinas_dir::getOperada() const {
	return this->operada;
}
void sala_maquinas_dir::setOperada(const bool &condi) {
	this->operada = condi;
}

void sala_maquinas_dir::mostra_info_sala(int x, int y, Consola &c)
{

	sala::mostra_info_sala(x, y, c);

	c.gotoxy(x + 8, y + 2);

	cout << "P:" << this->propulsor;

	c.gotoxy(x + 8, y + 3);

}