#ifndef SALA_MAQUINAS_PROP1_H
#define SALA_MAQUINAS_PROP1_H
#include "sala.h"

class sala_maquinas_esq: public sala
{
	int propulsor;  //ESQUERDO
	sala *sala_ptr;
	bool operada;
public:
	sala_maquinas_esq();
	virtual ~sala_maquinas_esq();
	int getPropulsor() const;
	void setPropulsor(const int &propulsor);
	string toString() const;
	void mostra_info_sala(int x, int y, Consola &c);
	int getDistance();
	bool getOperada() const;
	void setOperada(const bool &condi);

};

#endif