#ifndef SALA_MAQUINAS_PROP2_H
#define SALA_MAQUINAS_PROP2_H
#include "sala.h"

class sala_maquinas_dir: public sala
{
	int propulsor; //DIREITO
public:
	sala_maquinas_dir();
	~sala_maquinas_dir();
	int getPropulsor() const;
	void setPropulsor(const int &propulsor);
	string toString() const;


};

#endif
