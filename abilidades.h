<<<<<<< HEAD
=======
#pragma once

>>>>>>> origin/master
#ifndef ABILIDADES_H
#define ABILIDADES_H
#include "utils.h"


class abils {


	abils(const abils &abils) {};
	abils &operator=(const abils &abils) {};
	entidades * enti_ptr;
public:
	abils(entidades *enti);
	virtual ~abils();
	virtual string toString() const;
	entidades * getEntiPointer() const;
};

class reparador : public abils {

	int value;

public:
	reparador(const int &value, entidades *enti);
	virtual ~reparador();
	void execAbility();
	virtual string toString() const;


};









#endif