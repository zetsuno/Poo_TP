#include "utils.h"
#include "Jogo.h"

int main(){

	Jogo j;
	Consola c;
	

	bool EXIT = false;
	while (!EXIT)
	{
		j.mostra();
		EXIT = j.lecomando();
		j.fazcomando();
		if (!EXIT)
		{
			
		}
	}


	//nave nova;
	//crew_member *a = new crew_member("ze");
	sala sala_nova;
	sala_vida vida;
//	vida.addEntidade(a);
	vida.distributeOxi();
	sala_beliche beliche;
	//nova.cosmic_dust();
	//cout << nova.toString();
}