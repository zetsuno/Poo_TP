#include "utils.h"
#include "Jogo.h"

int main(){

	Jogo j;
	Consola c;
	
	
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
		EXIT = j.lecomando();
		j.fazcomando();
		j.avancaTurno();
		j.updateDistance();
		if (j.getDistance() == DFT_DISTANCE_TO_WIN) {
			cout << "Parab�ns, ganhou o jogo!" << endl;
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