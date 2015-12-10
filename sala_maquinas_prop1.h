#include "sala.h"

class sala_maquinas: public sala
{
	int propulsor;
public:
	sala_maquinas();
	~sala_maquinas();
	int getPropulsor() const;
	void setPropulsor(const int &propulsor);


};

