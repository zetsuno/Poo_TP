#include "sala.h"

class nave
{
	int escudo;
	vector <sala *> salas[4][3];

public:
	nave();
	~nave();
	int getEscudo() const;
	void setEscudo(const int &escudo);

};

