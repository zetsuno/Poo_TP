#include <iostream>
#include <string>
#include <sstream>

using namespace std;


class tripulante
{
	string tipo;
	int vida;
	int dano;

public:
	tripulante();
	~tripulante();
	int getVida();
	int getDano();
	void setVida(int vida);
	void setDano(int dano);

};

tripulante::tripulante()
{
}

tripulante::~tripulante()
{
}