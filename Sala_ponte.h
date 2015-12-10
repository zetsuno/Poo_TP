#include "sala.h"

class sala_ponte: public sala
{
	int dano;
	int vida;
	int oxigenio;
	int integridade;
public:
	sala_ponte();
	~sala_ponte();

	int getOxigenio() const;
	int getDano() const;
	int getVida() const;
	int getIntegridade() const;
	void setOxigenio(const int &oxigenio);
	void setDano(const int &dano);
	void setVida(const int &vida);
	void setIntegridade(const int &integridade);
	bool operada();
};

