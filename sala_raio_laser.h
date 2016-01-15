#ifndef SALA_RAIO_LASER_H
#define SALA_RAIO_LASER_H
#include "sala.h"

class sala_raio_laser : public sala
{
	//bool operada;
public:
	sala_raio_laser();
	virtual ~sala_raio_laser();
	bool getOperada() const;
	//void setOperada(const bool &condi);

};

#endif