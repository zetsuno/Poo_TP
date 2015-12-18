#ifndef SALA_H
#define SALA_H
#include "entidades.h"


static int id_sala = 1;

class nave;
class sala
{
	int id, saude, oxigenio, integridade;
	bool brecha, fogo, CC;
	vector <entidades *> pessoas_sala;
	nave * nave_ptr;

public:

	sala();
	virtual ~sala();
	int getOxigenio() const;
	int getIntegridade() const;
	int getSaude() const;
	void setOxigenio(const int &oxigenio);
	void setIntegridade(const int &integridade);
	void setSaude(const int &saude);
	virtual string toString() const;
	void setNavePtr(nave *n);
	nave * getNavePtr() const;
};

#endif