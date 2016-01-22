#include "utils.h"
/*==============================   CREW MEMBER   ===================*/

static int id_cm = 1;

int crew_member::getNewID()const
{

	return id_cm++;
}



crew_member::crew_member(const string &nome):entidades(CREW_HP, CREW_ATTACK){
	this->setAbilities();
	this->tipo = "crewmember";
	this->nome = nome;
	cout << " A construir uma entidade do tipo crewmember de nome " << nome << endl;
}

crew_member::crew_member(const crew_member &old):entidades(old){
	this->tipo = "Crewmember";
	this->nome = old.getNome();
	cout << " A construir POR COPIA uma entidade do tipo crewmember de nome " << nome << endl;
}
crew_member::~crew_member() {

	cout << "A destruir uma entidade do tipo crewmember de nome " << nome << endl;
}

string crew_member::toString() const {
	ostringstream os;
	os << "Tripulante: " << this->getID() << " Nome: " << this->nome << " Vida: " << this->getVida() << endl;
	return os.str();
}

string crew_member::getNome() const {
	return this->nome;
}

int crew_member::getMaxVida() const {
	return CREW_HP;
}
void crew_member::respira() {

	if (getSalaPointer()->getOxigenio() <= 0)
		this->setVida(getVida() - 1);
	else
		getSalaPointer()->setOxigenio(getSalaPointer()->getOxigenio() - 1);
}


/*void crew_member::combatente(const int a) {

	getSalaPointer()->atacaEnimigoRandom(a, *this);

}*/

void crew_member::setAbilities() {

	reparador *novo = new reparador(CREW_REPAIR, this);
	operador *novo2 = new operador(this);
	this->insertAbility(novo);
	this->insertAbility(novo2);
}