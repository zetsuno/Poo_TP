#include "utils.h"
/*==============================   CREW MEMBER   ===================*/

static int id_p = 1;

int pirata::getID()const{

	return id;
}


pirata::pirata(const string &nome) :entidades(PIRATE_HP, PIRATE_ATTACK_OTHERS){
	this->setAbilities();
	this->tipo = "pirata";
	this->nome = nome;
	this->setAbilities();
	this->id = id_p++;
	cout << " A construir uma entidade do tipo pirata de nome " << nome << endl;
}

pirata::pirata(const pirata &old) :entidades(old){
	this->tipo = "pirata";
	this->nome = old.getNome();
	this->id = id_p++;
	cout << " A construir POR COPIA uma entidade do tipo pirata de nome " << nome << endl;
}

pirata::~pirata() {

	cout << "A destruir uma entidade do tipo pirata de nome " << nome << endl;
}

string pirata::toString() const {
	ostringstream os;
	os << "Pirata: " << this->getID() << " Nome: " << this->nome << " Vida: " << this->getVida() << endl;
	return os.str();
}

string pirata::getNome() const {
	return this->nome;
}

int pirata::getMaxVida() const {
	return PIRATE_HP;
}


/*void pirata::combatente(const int a) {

getSalaPointer()->atacaEnimigoRandom(a, *this);

}*/

void pirata::setAbilities() {
	combatente *novo3 = new combatente(0, this);
	respira *novo = new respira(this);
	mover *novo2 = new mover(50,this);
	this->insertAbility(novo);
	this->insertAbility(novo2);
	this->insertAbility(novo3);
}