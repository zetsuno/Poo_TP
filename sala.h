#include "tripulante.h"
class sala
{
	int oxigenio;
	int dano;
	int saude;
	int integridade = 100;

public:
	sala();
	~sala();
	int getOxigenio();
	int getDano();
	int getSaude();
	int getIntegridade();
	void setOxigenio(int oxigenio);
	void setDano(int dano);
	void setSaude(int saude);
	void setIntegridade(int integridade);


};

sala::sala()
{
}

sala::~sala()
{
}
