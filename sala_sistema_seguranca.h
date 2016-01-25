#ifndef SALA_SISTEMA_SEGURANCA_H
#define SALA_SISTEMA_SEGURANCA_H
#include "sala.h"

class sala_sistema_seguranca : public sala
{
	//bool operada;
public:
	sala_sistema_seguranca();
	virtual ~sala_sistema_seguranca();
	bool getOperada() const;
	//void setOperada(const bool &condi);

	virtual void FimDeTurno(int x, int y);

};

#endif