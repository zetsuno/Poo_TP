#include "utils.h"
/*==============================   CREW MEMBER   ===================*/

static int id_x = 1;

int xenomorfo::getID()const{

	return id;
}


xenomorfo::xenomorfo(const string &nome) :entidades(CREW_HP, CREW_ATTACK){
	this->setAbilities();
	this->tipo = "xenomorfo";
	this->nome = nome;
	this->setAbilities();
	this->id = id_x++;
	cout << " A construir uma entidade do tipo xenomorfo de nome " << nome << endl;
}

xenomorfo::xenomorfo(const xenomorfo &old) :entidades(old){
	this->tipo = "xenomorfo";
	this->nome = old.getNome();
	this->id = id_x++;
	cout << " A construir POR COPIA uma entidade do tipo xenomorfo de nome " << nome << endl;
}
xenomorfo::~xenomorfo() {

	cout << "A destruir uma entidade do tipo xenomorfo de nome " << nome << endl;
}

string xenomorfo::toString() const {
	ostringstream os;
	os << "xenomorfo: " << this->getID() << " Nome: " << this->nome << " Vida: " << this->getVida() << endl;
	return os.str();
}

string xenomorfo::getNome() const {
	return this->nome;
}

int xenomorfo::getMaxVida() const {
	return 0;
}
int xenomorfo::getExoSkel() const {
	return 0;
}

void xenomorfo::setExoSkel(const int &value) {

}

void xenomorfo::respira() {

	if (getSalaPointer()->getOxigenio() <= 0)
		this->setVida(getVida() - 1);
	else
		getSalaPointer()->setOxigenio(getSalaPointer()->getOxigenio() - 1);
}


/*void xenomorfo::combatente(const int a) {

getSalaPointer()->atacaEnimigoRandom(a, *this);

}*/

void xenomorfo::setAbilities() {

	reparador *novo = new reparador(CREW_REPAIR, this);
	this->insertAbility(novo);
}