#include "utils.h"

int main(){
	nave nova;
	crew_member *a = new crew_member("ze");
	sala sala_nova;
	sala_vida vida;
	vida.addEntidade(a);
	vida.distributeOxi();
	sala_beliche beliche;
	nova.cosmic_dust();
	cout << nova.toString();
}