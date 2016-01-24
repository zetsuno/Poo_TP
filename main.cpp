#include "utils.h"
#include "Jogo.h"

int main(){

	Jogo j;
	Consola c;
	
	srand((unsigned int)time(NULL));
	//crew_member ze("ze nando");
	//cout << ze.toString();
	//crew_member nando(ze);
	//cout << nando.toString();
	bool EXIT = false;
	while (!EXIT)
	{
		j.meu_Clean();
		c.clrscr();
		j.mostra();
		j.execAbils();
		//j.cosmic_dust();
		//j.getNave()->meteor((sala_ponte *)j.getNave()->getRoom(1,3),(sala_raio_laser *)j.getNave()->getRoom(0,2),(sala_escudo*)j.getNave()->getRoom(1,2));
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

	
	//nave nova;
	//crew_member *a = new crew_member("ze");
	//sala sala_nova;
	//sala_vida vida;
	//vida.addEntidade(a);
	//vida.distributeOxi();
	
}