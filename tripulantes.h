#ifndef TRIPULANTES_H
#define TRIPULANTES_H
#include "entidades.h"

class crew_member : public entidades {

	string tipo, nome;  
	

public:
	crew_member(const string &nome);
	virtual ~crew_member();
	string toString() const;
	string getNome() const;
	void respira();
	void reparador(const int a = 1);
};

#endif