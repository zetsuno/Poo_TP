#include "entidades.h"

class nave;
class sala
{
	vector <entidades *> entidades_sala;
	int oxigenio;
	int dano;
	int saude;
	int integridade = 100;
	nave *ondeestou_sala;

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
	void atacaEnimigoRandom(const int &a, const crew_member &atacante);


};

sala::sala()
{
}

sala::~sala()
{
}
