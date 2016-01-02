#ifndef JOGO_H
#define JOGO_H

#include "consola.h"
#include "utils.h"





class Jogo
{
	string comando;
	Consola c;
	nave nave_jogo; // quando crio jogo crio uma nave
	//crew_member *a = new crew_member("A");
	vector<crew_member*> cm;
	int turno;


public:
	void inicia_jogo(const int &num_crew_mem);
	void goto_sala(const int &id, const int &sala_x, const int &sala_y);
	bool lecomando();
	void fazcomando();
	void mostra();
	void showHP_ship() const;
	void cosmic_dust();
	Jogo();
	virtual ~Jogo();
	void meu_Clean();
	int getTurno();
	void avancaTurno();
	void updateDistance();
	int getDistance();


};



#endif
