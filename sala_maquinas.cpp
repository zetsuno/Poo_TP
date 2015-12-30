#include "utils.h"


sala_maquinas::sala_maquinas() {
	crew_member *novo = new crew_member("Ze Maquinas");
	novo->setPointerSala(this);
	this->addEntidade(novo);
	this->setTipo("Sala_Maquinas");
	cout << " do tipo: Maquinas" << endl;
}

sala_maquinas::~sala_maquinas() {

	cout << "A destruir uma sala das maquinas... ";
}

bool sala_maquinas::Chk_Props() const {

	if (this->getIntegridade() == ZERO) {
		return true;
	}
	else
		return false;
}