#include "utils.h"

sala_beliche::sala_beliche() {

	cout << "A criar uma nova sala de beliche!" << endl;
	crew_member *p = new crew_member("Ze Nando");
	p->setPointerSala(this);
	this->addEntidade(p);

	xenomorfo *x = new xenomorfo("X");
	this->addXenomorfo(x);
}

sala_beliche::~sala_beliche() {

	cout << "A apagar uma sala de beliche!" << endl;
}