#include "entidades.h"

class sala
{

	int oxigenio;
	int integridade = 100;
	vector <entidades *> pessoas_sala;
public:

	sala();
	~sala();
	int getOxigenio() const;
	int getIntegridade() const;
	void setOxigenio(const int &oxigenio);
	void setIntegridade(const int &integridade);
	void atacaEnimigoRandom(const int &a, const crew_member &atacante);
	virtual string toString() const;
};

