#include <iostream>
#include <string>
#include "consola.h"
#include "utils.h"



using namespace std;

#ifndef JOGO_H
#define JOGO_H

class Jogo
{
	string comando;
	Consola c;
	nave nave_jogo; // quando crio jogo crio uma nave
	crew_member *a = new crew_member("ze");

public:
	void goto_sala();
	bool lecomando();
	void fazcomando();
	void mostra();
	Jogo();
	~Jogo();


};



#endif