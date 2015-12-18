#ifndef NAVE_H
#define NAVE_H
#include "sala.h"

class nave
{
	sala* salas[4][3];

public:
	nave();
	virtual ~nave();
	int getEscudo() const;
	void setEscudo(const int &escudo);
	string toString() const;
	bool addSala(const int &val, const string &tipo);

};

#endif