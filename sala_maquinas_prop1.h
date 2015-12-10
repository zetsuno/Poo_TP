#include "sala.h"

class sala_maquinas
{
	int propulsor;
public:
	sala_maquinas();
	~sala_maquinas();
	int getPropulsor() const;
	void setPropulsor(const int &propulsor);


};

sala_maquinas::sala_maquinas()
{
}

sala_maquinas::~sala_maquinas()
{
}