#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <cmath>

using namespace std;

class sala;
class entidades
{
	string tipo;  //good guy / bad guy
	int vida, combate_flag;
	int dano;
	sala *ondeestou_entidade;

public:
	entidades();
	~entidades();
	int getVida() const;
	int getDano() const;
	void setVida(const int &vida);
	void setDano(const int &dano);

};

class crew_member {

	string nome, tipo;
	int vida, combate_flag; //0 = fora de combate, 1 =  em combate
	sala *ondeestou_entidade;

public:
	crew_member(const string &nome);
	~crew_member();
	string toString() const;
	string getNome() const;
	int getVida() const;
	void respira();
	void reparador(const int a = 1);
	void combatente(const int a = 1);

};

entidades::entidades()
{
}

entidades::~entidades()
{
}

crew_member::crew_member(const string &nome){
	this->tipo = "Good Guy";
	this->nome = nome;
	this->vida = 5;
	this->combate_flag = 0;
	cout << " A construir uma entidade do tipo crewmember de nome " << nome << endl;
}

crew_member::~crew_member() {

	cout << "A destruir uma entidade do tipo crewmember de nome " << nome << endl;
}