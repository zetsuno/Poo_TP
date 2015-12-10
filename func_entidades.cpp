#include "nave.h"

entidades::entidades()
{
}

entidades::~entidades()
{
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



/*==============================   CREW MEMBER   ===================*/
crew_member::crew_member(const string &nome) {
	this->tipo = "Good Guy";
	this->nome = nome;
	this->setVida(5);
	this->setCombatFlag(0);
	cout << " A construir uma entidade do tipo crewmember de nome " << nome << endl;
}

crew_member::~crew_member() {

	cout << "A destruir uma entidade do tipo crewmember de nome " << nome << endl;
}

string crew_member::toString() const {
	ostringstream os;
	os << "Tripulante: Nome: " << this->nome << " Vida: " << this->getVida() << endl;
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
		this->setVida(getVida()-1);
	else
		getSalaPointer()->setOxigenio(getSalaPointer()->getOxigenio() - 1);
}

void crew_member::reparador(const int a){
	this->setVida( getVida()+ a);
}

void crew_member::combatente(const int a) {

	getSalaPointer()->atacaEnimigoRandom(a, *this);

}
