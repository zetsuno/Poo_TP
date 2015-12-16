#include "nave.h"

nave::nave()
{
	this->escudo = SHIP_HP;
	for (int i = 0; i != 4; i++) {
		for (int j = 0; j != 3; j++) {
			salas[i][j] = new sala();
			}
		}
	
	cout << "A construir uma nave" << endl;
}

nave::~nave()
{
	for (int i = 0; i != 4; i++) {
		for (int j = 0; j != 3; j++) {
			delete salas[i][j];
		}
	}
	cout << "A destruir a nave" << endl;
}

using namespace std;

int nave::getEscudo() const{

	return escudo;
}
void nave::setEscudo(const int &escudo){

	this->escudo = escudo;
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