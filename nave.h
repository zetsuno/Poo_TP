#include "sala.h"
class nave
{
	vector <sala *> salas[12];
	int escudo;
public:
	nave();
	~nave();
	int getEscudo();
	void setEscudo(int escudo);

};

nave::nave()
{
}

nave::~nave()
{
}
