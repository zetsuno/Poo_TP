#include "utils.h"

autoreparador::autoreparador()
{

	this->setTipo("autoreparador");
	//this->operada = false;
	cout << " do tipo: autoreparador" << endl;
}

autoreparador::~autoreparador()
{
	cout << "A apagar uma sala do tipo: autoreparador... ";
}


bool autoreparador::getOperada() const {

	return (sala::getNumeroTripulantes() > 0 && sala::getIntegridade() == 100);

}

void autoreparador::FimDeTurno(int x, int y)
{
	sala* salaAdjacente;

	if (this->getIntegridade() == 100)
	{
		for (int i = 0; i < 4; i++)
		{
			salaAdjacente = this->getNavePtr()->getSalaAdjacente(x,y,i);

			if (salaAdjacente != nullptr)
			{
				//salaAdjacente->setIntegridade(salaAdjacente->getIntegridade() - 5);

				if (salaAdjacente->getIntegridade() >= 95)
				{
					salaAdjacente->setIntegridade(100);
				}
				else
				{
					salaAdjacente->setIntegridade(salaAdjacente->getIntegridade() + 5);
				}
			}
		}
	
	}

	sala::FimDeTurno(x,y);


}

/*bool autoreparador::ForneceIntegridade() const{

	

}*/

/*void sala_raio_laser::setOperada(const bool &valor) {

this->operada = valor;
}*/


