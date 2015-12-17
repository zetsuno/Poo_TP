#ifndef SALA_H
#define SALA_H
#include "entidades.h"

static int id_sala = 500;

class sala
{
	int id;
	int oxigenio;
	int integridade;
	vector <entidades *> pessoas_sala;
public:

	sala();
	~sala();
	int getOxigenio() const;
	int getIntegridade() const;
	void setOxigenio(const int &oxigenio);
	void setIntegridade(const int &integridade);
	virtual string toString() const;
};

#endif