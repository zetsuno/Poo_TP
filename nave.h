#ifndef NAVE_H
#define NAVE_H
#include "sala.h"

class sala_ponte;
class nave
{	

	int distancia = 0;

public:
	sala* salas[3][4];
	nave();
	nave(const nave &n);
	virtual ~nave();
	string toString() const;
	bool addSala(const int &val, const string &tipo);
	void associar_sala(sala *s);
	void oxigena_salas();
	void meteor(sala_ponte *s);
	void cosmic_dust();
	void opt_salas();
	void updateDistance();
	int showDistance() const;
};

#endif