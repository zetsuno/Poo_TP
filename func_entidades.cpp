#include "entidades.h"

static int id_enti = 0;

entidades::entidades(int vida, int dano)
{
	this->vida = vida;
	this->dano = dano;
	this->combate_flag = DEFAULT_CBT_FLAG;
	this->id = id_enti;
	id_enti++;
	cout << "A construir uma entidade..." << endl;
}

entidades::~entidades()
{
	cout << "A destruir uma entidade" << endl;
}

int entidades::getID() const{
	return id;
}
int entidades::getDano() const{
	return dano;
}

int entidades::getVida() const{
	return vida;
}

int entidades::getCombatFlag() const {
	return combate_flag;
}

sala *entidades::getSalaPointer() const {

	return this->ondeestou_entidade;
}

void entidades::setDano(const int &dano){
	this->dano = dano;
}

void entidades::setVida(const int &vida){
	this->vida = vida;
}

void entidades::setCombatFlag(const int &flag) {

	this->combate_flag = flag;
}

void entidades::setPointerSala(sala *room) {

	this->ondeestou_entidade = room;
}


