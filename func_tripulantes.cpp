#include "tripulantes.h"
#include "sala.h"
/*==============================   CREW MEMBER   ===================*/


crew_member::crew_member(const string &nome):entidades(CREW_HP, CREW_ATTACK){
	this->tipo = "crewmember";
	this->nome = nome;
	cout << " A construir uma entidade do tipo crewmember de nome " << nome << endl;
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

int crew_member::getVida() const {
	return enti_ptr->getVida();
}

void crew_member::respira() {

	if (getSalaPointer()->getOxigenio() <= 0)
		this->setVida(getVida() - 1);
	else
		getSalaPointer()->setOxigenio(getSalaPointer()->getOxigenio() - 1);
}

void crew_member::reparador(const int a){
	this->setVida(getVida() + a);
}

/*void crew_member::combatente(const int a) {

	getSalaPointer()->atacaEnimigoRandom(a, *this);

}*/
