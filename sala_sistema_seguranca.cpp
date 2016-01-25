#include "utils.h"

sala_sistema_seguranca::sala_sistema_seguranca()
{

	this->setTipo("sala_sistema_seguranca");
	//this->operada = false;
	cout << " do tipo: sala_sistema_seguranca" << endl;
}

sala_sistema_seguranca::~sala_sistema_seguranca()
{
	cout << "A apagar uma sala do tipo: sala_sistema_seguranca... ";
}


bool sala_sistema_seguranca::getOperada() const {

	return (sala::getNumeroTripulantes() > 0 && sala::getIntegridade() == 100);

}

void sala_sistema_seguranca::FimDeTurno(int x, int y)
{
	sala* salaAdjacente;
	//pirata* p;

	if (this->getIntegridade() == 100)
	{
		for (int i = 0; i < 4; i++)
		{
			salaAdjacente = this->getNavePtr()->getSalaAdjacente(x, y, i);

			if (salaAdjacente != nullptr)
			{
				
				if (salaAdjacente->getNumeroPiratas() > 0)
				{
					salaAdjacente->setSaudePiratas();
					
				}

				
			}
		}

	}

	sala::FimDeTurno(x, y);
}


/*void sala_sistema_seguranca::setOperada(const bool &valor) {

this->operada = valor;
}*/
