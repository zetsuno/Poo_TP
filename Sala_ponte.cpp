#include "utils.h"

sala_ponte::sala_ponte()
{
}

sala_ponte::~sala_ponte()
{
}


bool sala_ponte::getOperada() const {

	return this->operada;
}


void sala_ponte::setOperada(const bool &valor) {

	this->operada = valor;
}