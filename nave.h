#include "sala.h"
class sala;
class nave
{
	int escudo;
	array <sala *, 12> salas;

public:
	nave();
	~nave();
	int getEscudo() const;
	void setEscudo(const int &escudo);
	string toString() const;
	bool addSala(const int &val, const string &tipo);

};

//WAZAA MOFO

mothafucka indahouse