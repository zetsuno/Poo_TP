#include "utils.h"




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

 void sala::mostra_info_sala(int x,int y, Consola &c)
 {
	 c.gotoxy(x, y);

	
	 cout << (char)218 << (char)196 << (char)196 << (char)196
		 << (char)196 << (char)196 << (char)196 << (char)196
		 << (char)196 << (char)196 << (char)196 << (char)196
		 << (char)196 << (char)196 << (char)196 << (char)196
		 << (char)196 << (char)196 << (char)196 << (char)191;

	// c.gotoxy(x, y+1);
	 //cout << (char)192;
	 for (int i = y+1; i < y+5; i++)
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

		 

		 c.gotoxy(x, y+5);
		 cout << (char)192 << (char)196 << (char)196 << (char)196 
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
		 
		// ostringstream os;

		// os << "Sala: Oxigenio: " << this->getOxigenio() << " |  Integridade: " << this->getIntegridade() << endl;

		 
 }

 bool sala::move_pessoa(const int &id, const int &new_sala_x, const int &new_sala_y) {

	 for (auto p = pessoas_sala.begin(); p != pessoas_sala.end(); p++) {
<<<<<<< HEAD
		 
		 if ((*p)->getID() == id) 
		 {
			 if (this == this->getNavePtr()->salas[new_sala_x][new_sala_y])
			 {
				 cout << "Essa pessoa j� se encontra nessa sala\n";
				 return false;
			 }
			 else
			 {
				 this->getNavePtr()->salas[new_sala_x][new_sala_y]->pessoas_sala.push_back(*p);
				 this->pessoas_sala.erase(p);
				 return true;
			 }

=======
		 if ((*p)->getID() == id) {
			 this->getNavePtr()->salas[new_sala_y][new_sala_x]->pessoas_sala.push_back(*p);
			 this->pessoas_sala.erase(p);
			 return true;
>>>>>>> origin/master
		 }
	 }
	 return false;
 }