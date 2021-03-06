#ifndef NAVE_H
#define NAVE_H
#include "sala.h"

class sala_ponte;
class sala_raio_laser;
class sala_escudo;

class nave
{	
	
	int distancia = 0;
	sala* salas[3][4];
	sala_raio_laser* raio_laser = nullptr;
	sala_escudo* shield = nullptr;

	nave &operator=(const nave &nave) {};

public:
	
	nave();
	nave(const nave &n);
	virtual ~nave();
	string toString() const;
	bool addSala(const int &val, const string &tipo);
	void associar_sala(sala *s);
	void oxigena_salas();
	void meteor();
	void cosmic_dust();
	void opt_salas();
	void updateDistance();
	int showDistance() const;
	sala * getRoom(const int &y, const int &x);
	bool AtaquePirata();
	void PrimeiroAtaquePirata();
	sala* getSalaAdjacente(int x, int y, int contador);
	void FimDeTurno();

};

#endif