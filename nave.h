#ifndef NAVE_H
#define NAVE_H
#include "sala.h"

class sala_ponte;
class nave
{	

	sala* salas[4][3];

public:
	nave();
	virtual ~nave();
	string toString() const;
	bool addSala(const int &val, const string &tipo);
	void associar_sala(sala *s);
	void oxigena_salas();
	void meteor(sala_ponte *s);
};

#endif