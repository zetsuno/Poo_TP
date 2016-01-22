#include "utils.h"


abils::abils(entidades *enti) {

	this->enti_ptr = enti;

}

abils::~abils() {}

entidades * abils::getEntiPointer() const {
	return this->enti_ptr;
}

string abils::toString() const {
	ostringstream os;

	return os.str();
}

int abils::getExoSkel() const {	return 0; }
int abils::getArmadoValue() const { return 0; }
void abils::setExoSkel(const int &value) {}
void abils::execAbility(){}

/*================  REPARADOR  =================*/
reparador::reparador(const int &value, entidades *enti) : abils(enti) {

	this->value = value;
}

void reparador::execAbility() {

	if (this->getEntiPointer()->getSalaPointer()->getIntegridade() < SALA_INT && (this->getEntiPointer()->getSalaPointer()->getIntegridade() + value) <= SALA_INT) {
		this->getEntiPointer()->getSalaPointer()->setIntegridade(getEntiPointer()->getSalaPointer()->getIntegridade() + value);
	}
	else
		cout << "Abilidade Reparador de " << this->getEntiPointer()->toString() << " falhou!" << endl;
}

string reparador::toString() const{
	string temp = "Reparador ";
	return temp;
}
reparador::~reparador() {}


/*====================  RESPIRA  ====================*/
respira::respira(entidades *enti): abils(enti){}
respira::~respira(){}
string respira::toString() const{
	string temp = "Respira ";
	return temp;
}
void respira::execAbility() {
	if (this->getEntiPointer()->getSalaPointer()->getOxigenio() > 0) {
		this->getEntiPointer()->getSalaPointer()->setOxigenio(getEntiPointer()->getSalaPointer()->getOxigenio() - 1);
	}
	else
		this->getEntiPointer()->setVida(this->getEntiPointer()->getVida() - 1);


}

/*====================FLAMEJANTE========================*/

flamejante::flamejante(entidades *enti): abils(enti){}
flamejante::~flamejante(){}
string flamejante::toString() const {
	string temp = "Flamejante ";
	return temp;
}
void flamejante::execAbility() {

	if (this->getEntiPointer()->getSalaPointer()->getOxigenio() < 5) {
		this->getEntiPointer()->getSalaPointer()->setOxigenio(ZERO);
	}
	else {
		this->getEntiPointer()->getSalaPointer()->setOxigenio(this->getEntiPointer()->getSalaPointer()->getOxigenio() - 5);
	}

}

/*=================TOXICO=====================*/

toxico::toxico(const int &value, entidades *enti) : abils(enti) {
	this->value = value;
}
toxico::~toxico(){}
string toxico::toString() const{
	string temp = "Toxico ";
	return temp;
}
void toxico::execAbility() {
	this->getEntiPointer()->getSalaPointer()->dmgNonToxic(value, this->getEntiPointer()->getSalaPointer());
}


/*================INDECISO===================*/
indeciso::indeciso(entidades *enti): abils(enti) {}
indeciso::~indeciso() {};
string indeciso::toString() const{
	string temp = "Indeciso ";
	return temp;
}

/*==============MISTERIOSO================*/

misterioso::misterioso(entidades *enti) : abils(enti) {}
misterioso::~misterioso(){}
string misterioso::toString() const{
	string temp = "Misterioso ";
	return temp;
}
void misterioso::execAbility(){
	int flag = 0, aux_num;
	aux_num = rand() % 100 + 1;
		if (aux_num <= 25) {
			if (flag == 1) {
				this->getEntiPointer()->getSalaPointer()->show(this->getEntiPointer());
				flag = 0;
			}
			if (flag == 0) {
				this->getEntiPointer()->getSalaPointer()->hide(this->getEntiPointer());
				flag = 1;
			}
		}
}

/*=============REGENERADOR==========*/
regenerador::regenerador(const int &value, entidades *enti) : abils(enti) {
	this->value = value;
}
regenerador::~regenerador(){}
string regenerador::toString() const{
	string temp = "Regenerador ";
	return temp;
}
void regenerador::execAbility(){

	if ((this->getEntiPointer()->getVida() + value) > this->getEntiPointer()->getMaxVida()) {
		this->getEntiPointer()->setVida(this->getEntiPointer()->getMaxVida());
	}
	else {
		this->getEntiPointer()->setVida(this->getEntiPointer()->getVida() + value);
	}
}

/*==============EXOESQEUELETO============*/

exoskeleton::exoskeleton(const int &value, entidades *enti) : abils(enti) {
	this->value = value;
}
exoskeleton::~exoskeleton(){}
string exoskeleton::toString() const{
	string temp = "Exoesqueleto ";
	return temp;
}
int exoskeleton::getExoSkel() const{
	return this->value;
}
void exoskeleton::setExoSkel(const int &value) {
	this->value = value;
}

/*===========ROBOTICO===============*/

robotico::robotico(const bool &value, entidades*enti): abils(enti) {
	this->value = value;
}
robotico::~robotico(){}
string robotico::toString() const{
	string temp = "Robotico ";
	return temp;
}

/*=============COMBATENTE==========*/

combatente::combatente(const int &value, entidades *enti): abils(enti) {
	this->value = value;
}
combatente::~combatente(){}
string combatente::toString() const {
	string temp = "Combatente ";
	return temp;
}
void combatente::execAbility() {
	this->getEntiPointer()->getSalaPointer()->dmgEnemies(this->getEntiPointer()->getSalaPointer(), this->getEntiPointer(), this->value);
}

/*============ARMADO=============*/

armado::armado(const int &value, entidades *enti) : abils(enti) {
	this->value = value;
}
armado::~armado(){}
string armado::toString() const {
	string temp = "Armado ";
	return temp;
}

int armado::getArmadoValue() const {
	return this->value;
}

/*=================OPERADOR===========*/
operador::operador(entidades *enti):abils(enti){}
operador::~operador(){}
string operador::toString() const {
	string temp = "Operador ";
	return temp;
}
void operador::execAbility() {
	if ((this->getEntiPointer()->getSalaPointer()->getNumeroPiratas() + this->getEntiPointer()->getSalaPointer()->getNumeroXenos()) == 0 && this->getEntiPointer()->getSalaPointer()->getOperada() == false) {
		this->getEntiPointer()->getSalaPointer()->setOperada(true);
	}
	if ((this->getEntiPointer()->getSalaPointer()->getNumeroPiratas() + this->getEntiPointer()->getSalaPointer()->getNumeroXenos()) > 0 && this->getEntiPointer()->getSalaPointer()->getOperada() == true) {
		this->getEntiPointer()->getSalaPointer()->setOperada(false);
	}
}