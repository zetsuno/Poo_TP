#ifndef ENTIDADES_H
#define ENTIDADES_H
#include "defines.h"

using namespace std;

class sala;
class entidades
{
	int vida, combate_flag; //0 = fora de combate, 1 =  em combate
	int dano, id;
	sala *ondeestou_entidade;

public:
	entidades(int vida, int dano);
	virtual ~entidades();
	int getID() const;
	int getVida() const;
	int getDano() const;
	int getCombatFlag() const;
	sala *getSalaPointer() const;
	void setVida(const int &vida);
	void setDano(const int &dano);
	void setCombatFlag(const int &flag);
	void setPointerSala(sala *room);

};



#endif