#ifndef SALA_ESCUDO_H
#define SALA_ESCUDO_H
#include "sala.h"

class sala_escudo : public sala
{
	int escudo;
	bool operada;
public:
	sala_escudo();
	virtual ~sala_escudo();
	int getEscudo() const;
	void setEscudo(const int &escudo);
	bool getOperada() const;
	void setOperada(const bool &condi);
	string toString() const;
	void disableShield();
	void mostra_info_sala(int x, int y, Consola &c);

};

#endif