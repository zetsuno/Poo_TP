#include "utils.h"

sala_ponte::sala_ponte()
{
	this->setTipo("Sala_Ponte");
	this->operada = false;
	cout << " do tipo: Ponte" << endl;
}

sala_ponte::~sala_ponte()
{
	cout << "A apagar uma sala do tipo: Ponte... ";
}


bool sala_ponte::getOperada() const {

	return this->operada;
}


void sala_ponte::setOperada(const bool &valor) {

	this->operada = valor;
}

void sala_ponte::meteor_nave() {

	this->getNavePtr()->meteor(this);
}