#ifndef ENTIDADES_H
#define ENTIDADES_H
#include "defines.h"

using namespace std;

class abils;
class sala;
class entidades
{
	int vida, combate_flag; //0 = fora de combate, 1 =  em combate
	int dano, id;
	sala *ondeestou_entidade;
	vector <abils *> abilidades;
<<<<<<< HEAD
	
=======
>>>>>>> origin/master

public:
	entidades(int vida, int dano);
	entidades(const entidades &old);
	virtual ~entidades();
	virtual int getID() const;
	int getVida() const;
	int getDano() const;\
	int getCombatFlag() const;
	sala *getSalaPointer() const;
	void setVida(const int &vida);
	void setDano(const int &dano);
	void setCombatFlag(const int &flag);
	void setPointerSala(sala *room);
	virtual void setAbilities() {};
	void insertAbility(abils *abil);
	string showAbilities() const;
	virtual string toString() const;
<<<<<<< HEAD

=======
>>>>>>> origin/master
	
	


};



#endif