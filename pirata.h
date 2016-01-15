#ifndef PIRATA_H
#define PIRATA_H
#include "entidades.h"

class pirata : public entidades {

	string tipo, nome;
	int id;


public:
	pirata(const string &nome);
	pirata(const pirata &old);
	virtual ~pirata();
	string toString() const;
	string getNome() const;
	void respira();
	void setAbilities();
	int getID()const;

};

#endif