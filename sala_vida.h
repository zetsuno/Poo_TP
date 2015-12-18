#ifndef SALA_VIDA_H
#define SALA_VIDA_H
#include "sala.h"

class sala_vida: public sala
{
	int dano;
	int vida;
	int oxigenio;

public:
	sala_vida();
	virtual ~sala_vida();
	int getOxigenio() const;
	int getDano() const;
	int getVida() const;
	void setOxigenio(const int &oxigenio);
	void setDano(const int &dano);
	void setVida(const int &vida);

};

#endif