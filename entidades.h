#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <cmath>

using namespace std;

class sala;
class entidades
{			
	int vida, combate_flag; //0 = fora de combate, 1 =  em combate
	int dano;
	sala *ondeestou_entidade;

public:
	entidades();
	~entidades();
	int getVida() const;
	int getDano() const;
	int getCombatFlag() const;
	sala *getSalaPointer() const;
	void setVida(const int &vida);
	void setDano(const int &dano);
	void setCombatFlag(const int &flag);
	void setPointerSala(sala *room);

};

class crew_member: public entidades {

	string tipo, nome;  //good guy  / bad guy 
	entidades * enti_ptr;

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



