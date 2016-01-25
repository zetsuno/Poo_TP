#include "utils.h"
/*==============================   CREW MEMBER   ===================*/

static int id_cap = 1000;

int Capitao::getID()const
{
	
	return id;
}



Capitao::Capitao(const string &nome) :entidades(CAPTN_HP, CAPTN_ATTACK){
	this->setAbilities();
	this->tipo = "Capitao";
	this->nome = nome;
	this->setAbilities();
	this->id = id_cap++;
	cout << " A construir uma entidade do tipo Capitao de nome " << nome << endl;
}

Capitao::Capitao(const Capitao &old) :entidades(old){
	this->tipo = "Capitao";
	this->nome = old.getNome();
	this->id = id_cap++;
	cout << " A construir POR COPIA uma entidade do tipo Capitao de nome " << nome << endl;
}
Capitao::~Capitao() {

	cout << "A destruir uma entidade do tipo Capitao de nome " << nome << endl;
}

string Capitao::toString() const {
	ostringstream os;
	os << "Capitao: " << this->getID() << " Nome: " << this->nome << " Vida: " << this->getVida() << endl;
	return os.str();
}

string Capitao::getNome() const {
	return this->nome;
}


void Capitao::respira() {

	if (getSalaPointer()->getOxigenio() <= 0)
		this->setVida(getVida() - 1);
	else
		getSalaPointer()->setOxigenio(getSalaPointer()->getOxigenio() - 1);
}


/*void crew_member::combatente(const int a) {

getSalaPointer()->atacaEnimigoRandom(a, *this);

}*/

void Capitao::setAbilities() {

	reparador *novo = new reparador(CREW_REPAIR, this);
	this->insertAbility(novo);
}