#include "sala.h"

class nave
{
	int escudo;
	sala* salas[4][3];

public:
	nave();
	~nave();
	int getEscudo() const;
	void setEscudo(const int &escudo);
	string toString() const;
	bool addSala(const int &val, const string &tipo);

};
