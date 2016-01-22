#ifndef SALA_MAQUINAS_H
#define SALA_MAQUINAS_H
#include "sala.h"
class sala_maquinas: public sala {

	bool operada;

public:
	
	bool Chk_Props() const;
	sala_maquinas();
	virtual ~sala_maquinas();
	bool getOperada() const;
	void setOperada(const bool &condi);
	
};




#endif