#include "utils.h"


sala_vida::sala_vida()
{
	//this->setFogo(true);
	this->brecha = false;
	this->operada = false;
	this->setTipo("Sala_Vida");
	cout << " do tipo: Vida" << endl;
}

sala_vida::~sala_vida()
{
	cout << "A apagar uma sala do tipo Vida... ";
}



void sala_vida::distributeOxi() const {



}