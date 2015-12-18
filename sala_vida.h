#ifndef SALA_VIDA_H
#define SALA_VIDA_H
#include "sala.h"

class sala_vida: public sala
{
	bool brecha;

public:
	sala_vida();
	virtual ~sala_vida();
	void distributeOxi() const;

};

#endif