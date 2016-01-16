#include "utils.h"

static int id_sala = 1;


sala::sala()
{
	this->id = id_sala;
	id_sala++;
	this->brecha = false;
	this->CC = false;
	this->fogo = false;
	this->oxigenio = SALA_OXI;
	this->integridade = SALA_INT;
	cout << "A construir uma sala";
}

sala::~sala()
{	
	for (auto p = pessoas_sala.begin(); p != pessoas_sala.end(); p++) {
		delete *p;
	}

	for (auto p1 = piratas.begin(); p1 != piratas.end(); p1++) {
		delete *p1;
	}

	for (auto x = xenomorfos.begin(); x != xenomorfos.end(); x++) {
		delete *x;
	}

	cout << " A a apagar uma sala" << endl;
}


int sala::getIntegridade() const{

	return integridade;
}

int sala::getOxigenio() const{

	return oxigenio;
}

int sala::getSaude() const {

	return saude;
}

string sala::getTipo() const {

	return this->tipo;
}

void sala::setIntegridade(const int &integridade){

	this->integridade = integridade;
}

void sala::setOxigenio(const int &oxigenio){

	this->oxigenio = oxigenio;
}

void sala::setTipo(const string &s){

	this->tipo = s;
}

void sala::setSaude(const int &saude) {

	this->saude = saude;
}
 string sala::toString() const {

	ostringstream os;

	os << "Sala: Oxigenio: " << this->getOxigenio() << " |  Integridade: " << this->getIntegridade() << endl;

	return os.str();
}

 void sala::setNavePtr(nave *n) {

	 this->nave_ptr = n;
 }

 nave * sala::getNavePtr() const {

	 return this->nave_ptr;
 }

 void sala::addEntidade(entidades *e) {
	 this->pessoas_sala.push_back(e);
 }

 void sala::addPirata(pirata *p){
	 this->piratas.push_back(p);
 }

 void sala::addXenomorfo(xenomorfo *x){
	 this->xenomorfos.push_back(x);
 }

 void sala::mostra_info_sala(int x,int y, Consola &c)
 {
	 c.gotoxy(x, y);

	
	 cout << (char)218 << (char)196 << (char)196 << (char)196
		 << (char)196 << (char)196 << (char)196 << (char)196
		 << (char)196 << (char)196 << (char)196 << (char)196// linha de cima da sala
		 << (char)196 << (char)196 << (char)196 << (char)196
		 << (char)196 << (char)196 << (char)196 << (char)191;

	// c.gotoxy(x, y+1);
	 //cout << (char)192;
	 for (int i = y+1; i < y+7; i++) // aqui ONDE ESTA O 7 METO AS LINHAS LATERAIS MAIS PARA BAIXO OU PARA CIMA
	 {
	 c.gotoxy(x, i);
	 cout << (char)179;     // Linhas laterais do retangulo maior
	 c.gotoxy(x+19, i);
	 cout << (char)179;
	 }

	 c.gotoxy(x + 1, y+1);

	 cout << "S:" << this->id ;

	 c.gotoxy(x + 1, y+2);
		 cout << "O:" << this->getOxigenio();
		 c.gotoxy(x+1,y+3);
		 cout << "I:" << this->getIntegridade();

		 

		 c.gotoxy(x, y+7);
		 cout << (char)192 << (char)196 << (char)196 << (char)196 //Acrescenta linha de baixo da sala
			 << (char)196 << (char)196 << (char)196 << (char)196 
			 << (char)196 << (char)196 << (char)196 << (char)196
			 << (char)196 << (char)196 << (char)196 << (char)196 
			 << (char)196 << (char)196  << (char)196 << (char)217;


		 c.gotoxy(x,y+6);

		c.gotoxy(x+1,y+4);

		 
		 for (unsigned int i = 0; i < pessoas_sala.size(); i++)
		 {
			 cout << "["<<pessoas_sala[i]->getID()<<"]";
		 }

		 c.gotoxy(x + 1, y + 5);
		 for (unsigned int j = 0; j < piratas.size(); j++)
		 {
			 cout << "<" << piratas[j]->getID() << ">";
		 }

		 c.gotoxy(x + 1, y + 6);
		 for (unsigned int i = 0; i < xenomorfos.size(); i++)
		 {
			 cout << "(" << xenomorfos[i]->getID() << ")";
		 }

		// ostringstream os;

		// os << "Sala: Oxigenio: " << this->getOxigenio() << " |  Integridade: " << this->getIntegridade() << endl;

		 
 }

 bool sala::move_pessoa(const int &id, const int &new_sala_x, const int &new_sala_y) {

	 string aux;
	 int aux_value;

	 for (auto p = pessoas_sala.begin(); p != pessoas_sala.end(); p++) {
		 
		 if ((*p)->getID() == id) 
		 {
			 if (this == this->getNavePtr()->getRoom(new_sala_x, new_sala_y))
			 {
				 cout << "Essa pessoa já se encontra nessa sala\n";
				 return false;
			 }
			 else
			 {
				 aux = (*p)->showAbilities();
				 if (aux.find("Indeciso ") != std::string::npos) { //Procura na string aux a palavra "Indeciso "
																   //Caso a entidade ter a abilidade "Indeciso";
					 aux_value = rand() % 100 + 1;
						 if (aux_value >= 50) {
							 this->getNavePtr()->getRoom(new_sala_x, new_sala_y)->pessoas_sala.push_back(*p);
							 this->pessoas_sala.erase(p);
							 return true;
						 }
						 else {
							 cout << "A unidade esta' indecisa! -- Nao se mexeu este turno!";
							 return false;
						 }
				 }
				 else {
					 this->getNavePtr()->getRoom(new_sala_x, new_sala_y)->pessoas_sala.push_back(*p);
					 this->pessoas_sala.erase(p);
					 return true;
				 }
			 }

		 }
	 }
	 return false;
 }

 int sala::getDistance() {
 
	 return 0;
 }


 int sala::getNumeroTripulantes()const{

	 return pessoas_sala.size();
 }


 void sala::dmgNonToxic(const int &value, sala *sala_ptr) {

	  string aux;
	  /*======TRIPULANTES=====*/
	 for (auto p = sala_ptr->pessoas_sala.begin(); p != sala_ptr->pessoas_sala.end(); p++) {
		 aux = (*p)->showAbilities();
		 if (aux.find("Toxico ") != std::string::npos) { //Procura na string aux a palavra "Toxico "
			 //Caso a entidade ter a abilidade "Toxico";
		 }
		 else {
			 (*p)->setVida((*p)->getVida() - value);
		 }
	 }
	 /*=======PIRATAS======*/
	 for (auto p = sala_ptr->piratas.begin(); p != sala_ptr->piratas.end(); p++) {
		 aux = (*p)->showAbilities();
		 if (aux.find("Toxico ") != std::string::npos) { //Procura na string aux a palavra "Toxico "
														 //Caso a entidade ter a abilidade "Toxico";
		 }
		 else {
			 (*p)->setVida((*p)->getVida() - value);
		 }
	 }
	 /*======XENOMORPHS=====*/
	 for (auto p = sala_ptr->xenomorfos.begin(); p != sala_ptr->xenomorfos.end(); p++) {
		 aux = (*p)->showAbilities();
		 if (aux.find("Toxico ") != std::string::npos) { //Procura na string aux a palavra "Toxico "
														 //Caso a entidade ter a abilidade "Toxico";
		 }
		 else {
			 (*p)->setVida((*p)->getVida() - value);
		 }
	 }
 }

 void sala::hide(entidades *enti) { //mete o xenomorfo num vetor auxiliar que esta 'escondido' no mapa

	 for (auto p = xenomorfos.begin(); p != xenomorfos.end(); p++) {
		 if ((*p) == enti) {
			 this->hidden.push_back(*p);
			 this->xenomorfos.erase(p);
		 }
	 }
 }

 void sala::show(entidades *enti) { //Coloca o xenomorfo numa sala aleatoria
	 sala * aux;
	 int rand_x = rand() % ((SALAS_TABLE_Y - 1) - ZERO + 1) + ZERO, rand_y = rand() % ((SALAS_TABLE_X - 1) - ZERO + 1) + ZERO;
	 for (auto p = hidden.begin(); p != hidden.end(); p++) {
		 if ((*p) == enti) {
			 while ((aux = this->getNavePtr()->getRoom(rand_x, rand_y)) == nullptr) {
				 rand_x = rand() % ((SALAS_TABLE_Y - 1) - ZERO + 1) + ZERO;
				 rand_y = rand() % ((SALAS_TABLE_X - 1) - ZERO + 1) + ZERO;
			 }
			 aux->xenomorfos.push_back(*p);
			 this->hidden.erase(p);
		 }
	 }
 }