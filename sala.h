#ifndef SALA_H
#define SALA_H
#include "entidades.h"
#include "consola.h"
#include "pirata.h"
#include "xenomorfo.h"




class nave;
class sala
{	
	string tipo;
	int id, saude, oxigenio, integridade, dano;
	bool brecha, fogo, CC;
	vector <entidades *> pessoas_sala;
	vector <pirata *> piratas;
	vector <xenomorfo*> xenomorfos;
	vector <xenomorfo *> hidden; //para a abilidade "Misterioso"
	nave * nave_ptr;
	sala(const sala &s) {};
	sala &operator=(const sala &s) {};
	
	

public:

	sala();
	virtual ~sala();
	int getOxigenio() const;
	int getIntegridade() const;
	int getSaude() const;
	string getTipo() const;
	int getDano() const;
	void setOxigenio(const int &oxigenio);
	void setIntegridade(const int &integridade);
	void setSaude(const int &saude);
	void setTipo(const string &s);
	void setDano(const int &dano);
	virtual string toString() const;
	void setNavePtr(nave *n);
	nave * getNavePtr() const;
	void addEntidade(entidades *e);
	void addPirata(pirata *p);
	void addXenomorfo(xenomorfo *x);
	int getNumeroTripulantes()const;
	int getNumeroXenos() const;
	int getNumeroPiratas() const;
	void dmgNonToxic(const int &value, sala *sala_ptr);
	void dmgEnemies(sala *sala, entidades *enti, const int &value);
	void hide(entidades *enti);
	void show(entidades *enti);
	virtual void mostra_info_sala(int x, int y, Consola &c);
	bool move_pessoa(const int &id, const int &new_sala_x, const int &new_sala_y);
	virtual int getDistance();
	void killUnit(sala *sala, entidades *enti);
	virtual bool getOperada() const;
	virtual void setOperada(const bool &condi);
	virtual void execAbils();
	void MoveAdj(const int &id, sala *sala, const int &value);
};

	

#endif