#include "entidades.h"

class sala
{

	int oxigenio;
	int dano;
	int saude;
	int integridade = 100;
	vector <entidades *> pessoas_sala;

public:

	sala();
	~sala();
	int getOxigenio() const;
	int getDano() const;
	int getSaude() const;
	int getIntegridade() const;
	void setOxigenio(const int &oxigenio);
	void setDano(const int &dano);
	void setSaude(const int &saude);
	void setIntegridade(const int &integridade);
	void atacaEnimigoRandom(const int &a, const crew_member &atacante);

};

sala::sala()
{
}

sala::~sala()
{
}