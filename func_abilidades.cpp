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