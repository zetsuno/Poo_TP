#include "nave.h"

int entidades::getDano() const{
	return dano;
}

int entidades::getVida() const{
	return vida;
}

void entidades::setDano(const int &dano){
	this->dano = dano;
}

void entidades::setVida(const int &vida){
	this->vida = vida;
}

/*==============================   CREW MEMBER   ===================*/

string crew_member::toString() const {
	ostringstream os;
	os << "Tripulante: Nome: " << this->nome << " Vida: " << this->vida << endl;
	return os.str();
}

string crew_member::getNome() const {
	return this->nome;
}

int crew_member::getVida() const {
	return this->vida;
}

void crew_member::respira() {

	if (ondeestou_entidade->getOxigenio() <= 0)
		this->vida--;
	else
		ondeestou_entidade->setOxigenio(ondeestou_entidade->getOxigenio() - 1);
}

void crew_member::reparador(const int a){
	this->vida += a;
}

void crew_member::combatente(const int a) {

	ondeestou_entidade->atacaEnimigoRandom(a, *this);

}
