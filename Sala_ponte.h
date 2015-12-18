#ifndef SALA_PONTE_H
#define SALA_PONTE_H
#include "sala.h"

class sala_ponte: public sala
{
	bool operada;
public:
	sala_ponte();
	virtual ~sala_ponte();
	bool getOperada() const;
	void setOperada(const bool &condi);
};

#endif