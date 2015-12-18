#ifndef TRIPULANTES_H
#define TRIPULANTES_H
#include "entidades.h"

class crew_member : public entidades {

	string tipo, nome;  //good guy  / bad guy 
	entidades * enti_ptr;

public:
	crew_member(const string &nome);
	virtual ~crew_member();
	string toString() const;
	string getNome() const;
	int getVida() const;
	void respira();
	void reparador(const int a = 1);
};

#endif