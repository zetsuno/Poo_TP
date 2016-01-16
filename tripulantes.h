#ifndef TRIPULANTES_H
#define TRIPULANTES_H
#include "entidades.h"

class crew_member : public entidades {

	string tipo, nome;  
	

public:
	crew_member(const string &nome);
	crew_member(const crew_member &old);
	virtual ~crew_member();
	string toString() const;
	string getNome() const;
	void respira();
	void setAbilities();
	int getNewID()const;
	int getMaxVida() const;
	
};

#endif