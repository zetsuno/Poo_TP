#include "utils.h"

nave::nave()
{
	distancia = DFT_DISTANCE;

	for (unsigned int i = 0; i < 3; i++) {
		for (unsigned int j = 0; j < 4; j++) {
			salas[i][j] = nullptr;
		}
	}
	/* ==== CRIA SALAS DEFAULT ==== */     /* ==== NAVE_PTR A APONTAR PARA A NAVE ==== */
	

	salas[0][0] = new sala_maquinas_esq();     salas[0][0]->setNavePtr(this);
	salas[1][0] = new sala_maquinas();         salas[1][0]->setNavePtr(this);
	salas[1][1] = new sala_vida();             salas[1][1]->setNavePtr(this);
	shield = new sala_escudo();              
	salas[1][2] = shield;					   salas[1][2]->setNavePtr(this);
	salas[1][3] = new sala_ponte();            salas[1][3]->setNavePtr(this);
	salas[2][0] = new sala_maquinas_dir();     salas[2][0]->setNavePtr(this);

	
	

	opt_salas();

	cout << "A construir uma nave" << endl;
}

nave::nave(const nave &n) {



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


void nave::opt_salas() {

	string opcao_sala, opcao_sn;
	int add_flag = 0, while_flag, salas_livres = 6;


	do{

		cout << "Salas livres: " << salas_livres;
		cout << "\nInsira o tipo de sala que quer inserir na nave:\nTipos:\n\t*Propulsor;\n\t*Beliche;\n\t*Raio Laser;\n\t*Auto-Reparador;\n\t*Sistema de segurança interno;\n\t*Enfermaria;\n\t*Sala de armas;\n\t*Alojamentos do Capitão;\n\t*Oficina Robótica;\n";
		cin >> opcao_sala;

		if (opcao_sala == "beliche" || opcao_sala == "Beliche") {
			for (int i = 0; i < 3; i++) {
				for (int j = 0; j < 4; j++) {
					if (salas[i][j] == nullptr) {
						salas[i][j] = new sala_beliche; salas[i][j]->setNavePtr(this);
						add_flag = 1;
						salas_livres--;
						goto end_cycle;
					}
				}
			}
		}

			if (opcao_sala == "raiolaser" || opcao_sala == "Raio laser") {
				for (int i = 0; i < 3; i++) {
					for (int j = 0; j < 4; j++) {
						if (salas[i][j] == nullptr) {
							raio_laser = new sala_raio_laser; 
							salas[i][j] = raio_laser;
							salas[i][j]->setNavePtr(this);
							add_flag = 1;
							salas_livres--;
							goto end_cycle;
						}
					}
				}
			}
		end_cycle:

			if (add_flag != 1){
				cout << "[ERRO] - Sala nao adicionada, falta de espaco na nave possivel?..." << endl;
			}
			else {
			cout << "Salas ainda nao implementadas" << endl;
			}

			cout << "\nAdicionar mais salas?(S/N): ";
			cin >> opcao_sn;

			if (opcao_sn == "S" || opcao_sn == "s") {
				while_flag = 1;
			}
			else {
				break;
			}

		
	} while (salas_livres > 0 && while_flag == 1);
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
			// Ainda tou a pensar em como implementar. O resto do código funciona bem
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

bool nave::AtaquePirata(){

	int random_sala_x, random_sala_y, random_piratas, random;

	srand((unsigned int)time(NULL)); //Seed = Hora

	random = rand() % (5 - 3 + 1) + 3;

	if (raio_laser != nullptr)
	{
		if (raio_laser->getOperada() == true)
		{
			return false;
		}
	}

	random_sala_x = rand() % ((SALAS_TABLE_X - 1) - ZERO + 1) + ZERO;
	random_sala_y = rand() % ((SALAS_TABLE_Y - 1) - ZERO + 1) + ZERO;

	while (salas[random_sala_y][random_sala_x] == nullptr) {
		random_sala_x = rand() % ((SALAS_TABLE_X - 1) - ZERO + 1) + ZERO;
		random_sala_y = rand() % ((SALAS_TABLE_Y - 1) - ZERO + 1) + ZERO;
	}

	for (int i = 0; i < random; i++)
	{
		pirata *pa = new pirata("P");
		pa->setPointerSala(salas[random_sala_y][random_sala_x]);
		salas[random_sala_y][random_sala_x]->addPirata(pa);

	}	

	
	return true;

}

void nave::PrimeiroAtaquePirata()
{
	int random_sala_x, random_sala_y, random_piratas, random, dano ,total;

	srand((unsigned int)time(NULL)); //Seed = Hora

	random = rand() % (60 - 30 + 1) + 30;


	if (shield != nullptr)
		/*if (shield->getEscudo() == 100)
		{
			shield->setEscudo(shield->getEscudo() - random);
		}*/
	
		if (shield->getEscudo() - random >= 0)
		{
			shield->setEscudo(shield->getEscudo() - random);
		}

		else
		{
			dano = random - shield->getEscudo();
			shield->setEscudo(0);
			
			random_sala_x = rand() % ((SALAS_TABLE_X - 1) - ZERO + 1) + ZERO;
			random_sala_y = rand() % ((SALAS_TABLE_Y - 1) - ZERO + 1) + ZERO;

			while (salas[random_sala_y][random_sala_x] == nullptr) {
				random_sala_x = rand() % ((SALAS_TABLE_X - 1) - ZERO + 1) + ZERO;
				random_sala_y = rand() % ((SALAS_TABLE_Y - 1) - ZERO + 1) + ZERO;
			}
			
			total = salas[random_sala_y][random_sala_x]->getIntegridade() - dano;
			

			if (total <= 0)
			{
				salas[random_sala_y][random_sala_x]->setIntegridade(0);

				// FALTA METODO PARA TERMINAR O JOGO QUANDO SALA É DESTRUIDA
			}

			else
			{
				salas[random_sala_y][random_sala_x]->setIntegridade(total);
			}
		}

}


void nave::updateDistance() {

	distancia += salas[0][0]->getDistance();
	distancia += salas[2][0]->getDistance();
}

int nave::showDistance() const {
	return this->distancia;
}

sala *nave::getRoom(const int &x, const int &y){
	if (salas[x][y] != nullptr) {
		return salas[x][y];
	}
	else {
		return nullptr;
	}
}

