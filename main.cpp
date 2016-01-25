#include "utils.h"
#include "Jogo.h"

int main(){

	Jogo j;
	Consola c;
	
	srand((unsigned int)time(NULL));
	bool EXIT = false;
	while (!EXIT)
	{
		j.meu_Clean();
		c.clrscr();
		j.mostra();
		j.execAbils();
		EXIT = j.lecomando();
		j.fazcomando();
		j.avancaTurno();
		j.updateDistance();
		if (j.getDistance() == DFT_DISTANCE_TO_WIN) {
			cout << "Parabéns, ganhou o jogo!" << endl;
			return 1;
		}
		if (!EXIT)
		{
			
		}
	}
}