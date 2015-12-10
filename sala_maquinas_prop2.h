#include "sala.h"

class sala_maquinas_2: public sala
{
	int propulsor;
public:
	sala_maquinas_2();
	~sala_maquinas_2();
	int getPropulsor() const;
	void setPropulsor(const int &propulsor);


};

