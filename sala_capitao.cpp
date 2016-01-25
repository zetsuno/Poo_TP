#include "utils.h"

sala_capitao::sala_capitao() {

	cout << "A criar uma nova sala_capitao!" << endl;
	Capitao *p = new Capitao("Ze Nando CAP");
	p->setPointerSala(this);
	this->addEntidade(p);

}

sala_capitao::~sala_capitao() {

	cout << "A apagar uma sala_capitao!" << endl;
}