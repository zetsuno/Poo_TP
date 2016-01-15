#include "utils.h"

sala_raio_laser::sala_raio_laser()
{
	
	this->setTipo("Sala_Raio_Laser");
	//this->operada = false;
	cout << " do tipo: Raio Laser" << endl;
}

sala_raio_laser::~sala_raio_laser()
{
	cout << "A apagar uma sala do tipo: Laser... ";
}


bool sala_raio_laser::getOperada() const {

	return (sala::getNumeroTripulantes() > 0 && sala::getIntegridade() == 100);
	
}


/*void sala_raio_laser::setOperada(const bool &valor) {

	this->operada = valor;
}*/
