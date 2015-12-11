#include "sala.h"

class sala_escudo : public sala
{
	int escudo;
public:
	sala_escudo();
	~sala_escudo();
	int getEscudo() const;
	void setEscudo(const int &escudo);
	string toString() const;

};

