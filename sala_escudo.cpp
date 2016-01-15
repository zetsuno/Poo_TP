#include "utils.h"

sala_escudo::sala_escudo()
{
	crew_member *novo = new crew_member("Ze Escudos");
	novo->setPointerSala(this);
	this->addEntidade(novo);
	this->setTipo("Escudo");
	this->escudo = SHIP_SHIELD;
	this->operada = false;
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

	this->escudo -= escudo;
}

string sala_escudo::toString() const {

	ostringstream os;

	os << "Sala: Oxigenio: " << this->getOxigenio() << " | Integridade: " << this->getIntegridade() << " |  Escudo: " << this->getEscudo() << endl;

	return os.str();
}

void sala_escudo::disableShield() {

	this->escudo = NULL;
}

void sala_escudo::mostra_info_sala(int x, int y, Consola &c)
{

	sala::mostra_info_sala(x, y, c);

	c.gotoxy(x + 8, y + 2);

	cout << "E:" << this->escudo;

	c.gotoxy(x + 8, y + 3);

}