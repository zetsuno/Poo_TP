#ifndef XENOMORFO_H
#define XENOMORFO_H
#include "entidades.h"

class xenomorfo : public entidades {

	string tipo, nome;
	int id;

public:
	xenomorfo(const string &nome);
	xenomorfo(const xenomorfo &old);
	virtual ~xenomorfo();
	string toString() const;
	string getNome() const;
	void respira();
	void setAbilities();

	int getID()const;

};

#endif