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
	virtual void execAbility();
	virtual int getExoSkel() const;
	virtual void setExoSkel(const int &value);
	virtual int getArmadoValue() const;
};

class reparador : public abils {

	int value;

public:
	reparador(const int &value, entidades *enti);
	virtual ~reparador();
	void execAbility();
	virtual string toString() const;


};

class respira : public abils {

public:
	respira(entidades *enti);
	virtual ~respira();
	void execAbility();
	virtual string toString() const;
};

class flamejante : public abils {

public:
	flamejante(entidades *enti);
	virtual ~flamejante();
	void execAbility();
	virtual string toString() const;
};

class toxico : public abils {

	int value;

public:
	toxico(const int &value, entidades *enti);
	virtual ~toxico();
	void execAbility();
	virtual string toString() const;
};

class indeciso : public abils {

public:
	indeciso(entidades *enti);
	virtual ~indeciso();
	virtual string toString() const;

};

class misterioso : public abils {

public:
	misterioso(entidades *enti);
	virtual ~misterioso();
	virtual string toString() const;
	void execAbility();
};

class regenerador : public abils {

	int value;
public:
	regenerador(const int &value, entidades *enti);
	virtual ~regenerador();
	virtual string toString() const;
	void execAbility();
};

class exoskeleton : public abils {

	int value;
public:
	exoskeleton(const int &value, entidades *enti);
	virtual ~exoskeleton();
	virtual string toString() const;
	int getExoSkel() const;
	void setExoSkel(const int &value);
};

class robotico : public abils {

	bool value;
public:
	robotico(const bool &value, entidades *enti);
	virtual ~robotico();
	virtual string toString() const;
};

class combatente : public abils {

	int value;
public:
	combatente(const int &value, entidades *enti);
	virtual ~combatente();
	virtual string toString() const;
	void execAbility();

};

class armado : public abils {

	int value;
public:
	armado(const int &value, entidades *enti);
	virtual ~armado();
	virtual string toString() const;
	virtual int getArmadoValue() const;

};

class operador : public abils {

public:
	operador(entidades *enti);
	virtual ~operador();
	virtual string toString() const;
	void execAbility();
};
#endif