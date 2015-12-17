#ifndef SALA_MAQUINAS_PROP1_H
#define SALA_MAQUINAS_PROP1_H
#include "sala.h"

class sala_maquinas_esq: public sala
{
	int propulsor;  //ESQUERDO
public:
	sala_maquinas_esq();
	~sala_maquinas_esq();
	int getPropulsor() const;
	void setPropulsor(const int &propulsor);
	string toString() const;

};

#endif