#include "sala.h"

class sala_vida
{
	int dano;
	int vida;
	int oxigenio;

public:
	sala_vida();
	~sala_vida();

	int getOxigenio() const;
	int getDano() const;
	int getVida() const;
	void setOxigenio(const int &oxigenio);
	void setDano(const int &dano);
	void setVida(const int &vida);

};

sala_vida::sala_vida()
{
}

sala_vida::~sala_vida()
{
}