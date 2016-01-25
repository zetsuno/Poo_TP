#ifndef CAPITAO_H
#define CAPITAO_H
#include "entidades.h"

class Capitao : public entidades {

	string tipo, nome;
	int id;
	Capitao &operator=(const Capitao *old){}

public:
	Capitao(const string &nome);
	Capitao(const Capitao &old);
	virtual ~Capitao();
	string toString() const;
	string getNome() const;
	void respira();
	void setAbilities();
	int getID()const;

};

#endif