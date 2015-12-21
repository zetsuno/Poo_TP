#include "utils.h"

nave::nave()
{	
	
	for (unsigned int i = 0; i < 3; i++) {
		for (unsigned int j = 0; j < 4; j++) {
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

nave::nave(const nave &n){



}
nave::~nave()
{
	for (unsigned int i = 0; i < 3; i++) {
		for (unsigned int j = 0; j < 4; j++) {
			if (salas[i][j] != nullptr) {
				delete salas[i][j];
				cout << endl;
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
		cout << endl << "Salas nao configuraveis!" << endl << "Uma destas salas pode ser configurada:\n" << "1;\n2;\n3;\n9;\n10;\n11;" << endl;
		return false;
	}
	return true;
}

void nave::associar_sala(sala *s) {

	s->setNavePtr(this);
}

void nave::oxigena_salas() {

	for (unsigned int i = 0; i < 3; i++) {
		for (unsigned int j = 0; j < 4; j++) {
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
		random = rand() % (meteor_max_1 - meteor_min_1 + 1) + meteor_min_1;
		for (int i = 0; i < random; i++) {	
		}
	}
	else {
		random = rand() % (meteor_max_2 - meteor_min_2 + 1) + meteor_min_2;
	}
}

void nave::cosmic_dust() {

	int random, random_x, random_y, prev_values[20], contador = ZERO;

	srand((unsigned int)time(NULL)); //Seed = Hora

	random = rand() % (cosmic_max - cosmic_min + 1) + cosmic_min;

	for (int i = 0; i < random; i++) {

		if (contador == ZERO) {

			random_x = rand() % ((SALAS_TABLE_X - 1) - ZERO + 1) + ZERO;
			random_y = rand() % ((SALAS_TABLE_Y - 1) - ZERO + 1) + ZERO;

			while (salas[random_y][random_x] == nullptr) {
				random_x = rand() % ((SALAS_TABLE_X - 1) - ZERO + 1) + ZERO;
				random_y = rand() % ((SALAS_TABLE_Y - 1) - ZERO + 1) + ZERO;
			}
			cout << "Vetor de valores antigos: ";
			prev_values[contador] = random_y; cout << prev_values[contador] << " "; contador++;
			prev_values[contador] = random_x; cout << prev_values[contador] << " "; contador++;
			salas[random_y][random_x]->setIntegridade(salas[random_y][random_x]->getIntegridade() - METEOR_COSMIC_DMG);
		}
		else {
			
			random_x = rand() % ((SALAS_TABLE_X - 1) - ZERO + 1) + ZERO;
			random_y = rand() % ((SALAS_TABLE_Y - 1) - ZERO + 1) + ZERO;

			while (salas[random_y][random_x] == nullptr) {
				random_x = rand() % ((SALAS_TABLE_X - 1) - ZERO + 1) + ZERO;
				random_y = rand() % ((SALAS_TABLE_Y - 1) - ZERO + 1) + ZERO;
			}

			// CONFIRMAÇÃO DE VALORES UNICOS (NAO HA ATAQUES NA MESMA SALA) - Este código comentado ainda ñ funciona
			// Ainda tou a pensar em como implementar, (merda dos vetores ._.), O resto do código funciona bem
            // Para veres o resto do código a funcionar, vê o resultado do toString() da nave, :D

			/*for (int conta_vetor = 0; conta_vetor < contador; conta_vetor += 2) {
				while(prev_values[conta_vetor] == random_y && prev_values[conta_vetor + 1] == random_x) {
					random_x = rand() % ((SALAS_TABLE_X - 1) - ZERO + 1) + ZERO;
					random_y = rand() % ((SALAS_TABLE_Y - 1) - ZERO + 1) + ZERO;
				}
			}*/
			
			prev_values[contador] = random_y; cout << prev_values[contador] << " "; contador++;
			prev_values[contador] = random_x; cout << prev_values[contador] << " "; contador++;
			salas[random_y][random_x]->setIntegridade(salas[random_y][random_x]->getIntegridade() - METEOR_COSMIC_DMG);
		}
	}
}