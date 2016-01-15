#include "utils.h"
/*==============================   CREW MEMBER   ===================*/

static int id_p = 1;

int pirata::getID()const{

	return id;
}


pirata::pirata(const string &nome) :entidades(CREW_HP, CREW_ATTACK){
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

void pirata::respira() {

	if (getSalaPointer()->getOxigenio() <= 0)
		this->setVida(getVida() - 1);
	else
		getSalaPointer()->setOxigenio(getSalaPointer()->getOxigenio() - 1);
}


/*void pirata::combatente(const int a) {

getSalaPointer()->atacaEnimigoRandom(a, *this);

}*/

void pirata::setAbilities() {

	reparador *novo = new reparador(CREW_REPAIR, this);
	this->insertAbility(novo);
}