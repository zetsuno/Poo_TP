#include "utils.h"

static int id_enti = 1;



entidades::entidades(int vida, int dano)
{
	this->vida = vida;
	this->dano = dano;
	this->combate_flag = DEFAULT_CBT_FLAG;
	this->id = id_enti;
	id_enti++;

	cout << "A construir uma entidade..." << endl;
}
entidades::entidades(const entidades &old)
{
	this->vida = old.vida;
	this->dano = old.dano;
	this->combate_flag = old.getCombatFlag();
	this->id = old.getID();
	cout << "A construir uma entidade POR COPIA..." << endl;
}

entidades::~entidades()
{
	for (auto p = abilidades.begin(); p != abilidades.end(); p++) {
		delete *p;
	}
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

int entidades::getMaxVida() const{
	return 0;
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


void entidades::insertAbility(abils *nova) {

	this->abilidades.push_back(nova);
}

string entidades::showAbilities() const {

	ostringstream os;
	for (auto p = abilidades.begin(); p != abilidades.end(); p++) {
		os << "*" << (*p)->toString() << endl;
	}
	return os.str();
}

string entidades::toString() const {
	ostringstream os;
	return os.str();
}

abils * entidades::getAbilPtr(const string &nome) const {

	for (auto a = this->abilidades.begin(); a != this->abilidades.end(); a++) {
		if ((*a)->toString() == nome) {
			return *a;
		}
	}
	cout << "A abilidade não existe nessa pessoa!";
	return nullptr;
}

void entidades::execAbils() {
	for (auto a = this->abilidades.begin(); a != this->abilidades.end(); a++) {
		(*a)->execAbility();
	}
}