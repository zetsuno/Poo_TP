#include "utils.h"

nave::nave()
{	
	for (unsigned int i = 0; i < 4; i++) {
		for (unsigned int j = 0; j < 3; j++) {
			salas[i][j] = nullptr;
		}
	}
	/* ==== CRIA SALAS DEFAULT ==== */     /* ==== NAVE_PTR A APONTAR PARA A NAVE ==== */

	salas[0][0] = new sala_maquinas_esq();     salas[0][0]->setNavePtr(this);
	salas[1][0] = new sala_maquinas();         salas[1][0]->setNavePtr(this);
	salas[1][1] = new sala_vida();             salas[1][1]->setNavePtr(this);
	salas[1][2] = new sala_escudo();           salas[1][2]->setNavePtr(this);
	salas[1][3] = new sala_ponte();            salas[1][3]->setNavePtr(this);
	salas[2][0] = new sala_maquinas_dir();     salas[2][0]->setNavePtr(this);
	 
	cout << "A construir uma nave" << endl;
}

nave::~nave()
{
	for (unsigned int i = 0; i < 4; i++) {
		for (unsigned int j = 0; j < 3; j++) {
			if (salas[i][j] != nullptr) {
				delete salas[i][j];
			}
		}
	}
	cout << "A destruir a nave" << endl;
}

string nave::toString() const {

	ostringstream os;
	
	os << "Integridade da nave: " << ((salas[0][0]->getIntegridade() * .5) + (salas[2][0]->getIntegridade() * .5)) << "%" << endl;

		return os.str();
}

bool nave::addSala(const int &val, const string &tipo){

	if (val == 0 || val == 4 || val == 5 || val == 6 || val == 7 || val == 8) {
		cout << endl << "Salas nao configuraveis!" << endl << "Uma destas salas pode ser configurada:\n " << "1;\n2;\n3;\n9;\n10;\n11;" << endl;
		return false;
	}
	return true;
}

void nave::associar_sala(sala *s) {

	s->setNavePtr(this);
}

void nave::oxigena_salas() {

	for (unsigned int i = 0; i < 4; i++) {
		for (unsigned int j = 0; j < 3; j++) {
			if (salas[i][j]->getNavePtr() != nullptr && salas[i][j]->getOxigenio() < SALA_OXI) {
				if (salas[i][j]->getOxigenio() == (SALA_OXI - 1)) {
					salas[i][j]->setOxigenio(SALA_OXI);
				}
				else {

					salas[i][j]->setOxigenio(salas[i][j]->getOxigenio() + 2);
				}
			}
		}
	}
}

void nave::meteor(sala_ponte *s) {

	int contador, random;

	srand((unsigned int)time(NULL)); //Seed = Hora
	
	if (s->getOperada() == true) {

		random = rand() % (max_1 - min_1 + 1) + min_1;
		for (int i = 0; i < random; i++) {
			
			//acabo dps
		}
	}
	else {

		random = rand() % (max_2 - min_2 + 1) + min_2;
	
	}
}
