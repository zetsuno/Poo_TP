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
		j.mostra();
		EXIT = j.lecomando();
		j.fazcomando();
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