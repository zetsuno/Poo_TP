#ifndef AUTOREPARADOR_H
#define AUTOREPARADOR_H
#include "sala.h"

class autoreparador : public sala
{
	//bool operada;
public:
	autoreparador();
	virtual ~autoreparador();
	bool getOperada() const;
	//void setOperada(const bool &condi);

	//bool ForneceIntegridade() const;
	virtual void FimDeTurno(int x, int y);

};

#endif