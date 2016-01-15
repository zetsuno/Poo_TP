#include "Jogo.h"

Jogo::Jogo()
{
	this->turno = 0;
}

Jogo::~Jogo()
{
}

void Jogo::avancaTurno() {
<<<<<<< HEAD

	int random;

	if (turno % 5 == 0)
	{
		PrimeiroAtaquePirata();

		if (this->AtaquePirata() == true)
		{

			
			c.gotoxy(0, 36);
			cout << "Foi atacado por piratas\n";
		}

		else
		{
			c.gotoxy(0, 36);
			cout << "Conseguiu afastar os piratas\n";
		}
	}

=======
>>>>>>> origin/master
	this->turno++;
}
int Jogo::getTurno() {
	return this->turno;
}

bool Jogo::lecomando()
{
	c.setScreenSize(40, 120);
	c.setBackgroundColor(c.PRETO);
	/*c.gotoxy(51, 0);
	cout << (char)218;
	for (int i = 52; i < 79; i++)
	{
		c.gotoxy(i, 0);
		cout << (char)196;
		c.gotoxy(i, 38);
		cout << (char)196;
	}*/
	/*c.gotoxy(79, 0);
	cout << (char)191;
	for (int i = 1; i < 38; i++)
	{
		c.gotoxy(51, i);
		cout << (char)179;
		c.gotoxy(79, i);
		cout << (char)179;
	}*/
	/*c.gotoxy(51, 38);
	cout << (char)192;
	c.gotoxy(79, 38);
	cout << (char)217;
	c.gotoxy(52, 1);*/
	//cout << "INFORMACOES                ";
	/*for (int i = 52; i < 79; i++)
	{
		for (int j = 2; j < 38; j++)
		{
			c.gotoxy(i, j);
			cout << " ";
		}
	}*/
	c.gotoxy(0, 3);
	//cout << (char)218; // canto sup esq do retangulo maior
	c.gotoxy(0, 3);
	//cout << (char)218; // canto sup esq do retangulo maior
	/*for (int i = 1; i < 50; i++)
	{
		c.gotoxy(i, 3);
		cout << (char)196;
		c.gotoxy(i, 34);         // Este for() na lina abaixo dos comandos do retangulo maior
		cout << (char)196;
	}*/
	c.gotoxy(50, 3);
	//cout << (char)191;
	c.gotoxy(50, 34);
	//cout << (char)217;
	c.gotoxy(0, 34);
	/*cout << (char)192;
	for (int i = 4; i < 34; i++)
	{
		c.gotoxy(0, i);
		cout << (char)179;     // Linhas laterais do retangulo maior
		c.gotoxy(50, i);
		//cout << (char)179;
	}*/
	c.gotoxy(0, 0);
	cout << (char)218 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196
		<< (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196
		<< (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196
		<< (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196
		<< (char)196 << (char)191;
	c.gotoxy(49, 1);
	cout << (char)179;
	c.gotoxy(0, 2);
	cout << (char)192 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196
		<< (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196
		<< (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196
		<< (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196
		<< (char)196 << (char)217;
	c.gotoxy(0, 35);
	cout << (char)218 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196
		<< (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196
		<< (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196
		<< (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196
		<< (char)196 << (char)191; // linha de cima das informaçoes
	c.gotoxy(49, 36);
	cout << (char)179;
	c.gotoxy(49, 37);
	cout << (char)179;
	c.gotoxy(49, 38);
	cout << (char)179;
	c.gotoxy(0, 39);
	cout << (char)192 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196
		<< (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196
		<< (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196
		<< (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196
		<< (char)196 << (char)217; //linha de baixo das informações
	
	c.gotoxy(0, 36);
	cout << (char)179 << "[TURNO:" << this->getTurno() <<"]"" INFORMACOES:\nDistancia percorrida: " << this->nave_jogo.showDistance();
	c.gotoxy(0, 37);
	cout << (char)179;
	c.gotoxy(0, 38);
	cout << (char)179;
	
	for (int i = 10; i < 49; i++)
	{
		c.gotoxy(i, 1);
		cout << " ";
	}

	c.gotoxy(0, 1);
	cout << (char)179 << "Cmd >>";
	getline(cin, comando);
	if (comando == "EXIT")
	{
		return true;
	}


	c.gotoxy(1, 37);

	for (int i = 1; i < 49; i++) // limpa erro anterior
	{
		c.gotoxy(i, 37);
		cout << " ";
	}
	c.gotoxy(1, 37);

	return false;

}

void Jogo::meu_Clean()
{
	//c.gotoxy(0,4);

	for (int y = 0; y < 37; y++)
	{
		c.gotoxy(0, y);

		for (int x = 0; x < 80; x++)
		{
			cout << " ";
		}
		
	}
	
}


void Jogo::fazcomando()
{
	string str;
	int sala_x, sala_y, id_ent;
	vector<sala>salas;

	istringstream is(comando);
	is >> str;

	if (str == "move")
	{
		istringstream is(comando);
		
		is >> str >> id_ent >> sala_x >> sala_y;

		if (sala_x < 0 || sala_x > 2 || sala_y < 0 || sala_y > 3)
		{
			//c.gotoxy(10, 1);
			cout << "Erro no tamanho da sala!" << endl;
			//lecomando();
		}
		else
			goto_sala(id_ent, sala_x, sala_y);
	}
}

void Jogo::inicia_jogo(const int &num_crew_mem)
{
	string nome[] = {"A","B","C","D","E","F","G"};
	
	// fica por resolver gerar letras difereentes

	for (int i = 0; i < num_crew_mem; i++)
	{
		

		crew_member *a = new crew_member(nome[i]);
		cm.push_back(a);
		nave_jogo.getRoom(1,3)->addEntidade(a);
<<<<<<< HEAD

		
=======
>>>>>>> origin/master
	}
	
}

void Jogo::mostra(){

	//c.gotoxy(10,10);
	//cout << nave_jogo.salas[0][0]->toString();
	for (int i = 0; i < 3; i++)
		for (int j = 0; j < 4; j++)
		{
			if (nave_jogo.getRoom(i,j) != NULL)
<<<<<<< HEAD
			nave_jogo.getRoom(i,j)->mostra_info_sala(10 + j * 20, 10 + i * 8, c); //i=y é as linhas e j=x é as colunas // i* -> move no y cima e baixo
=======
			nave_jogo.getRoom(i,j)->mostra_info_sala(10 + j * 20, 10 + i * 6, c); //i=y é as linhas e j=x é as colunas
>>>>>>> origin/master
		}
}

void Jogo::showHP_ship() const {

	cout << this->nave_jogo.toString();

}

void Jogo::cosmic_dust(){

	this->nave_jogo.cosmic_dust();
}

bool Jogo::AtaquePirata(){

	return this->nave_jogo.AtaquePirata();
}

void Jogo::PrimeiroAtaquePirata()
{
	return this->nave_jogo.PrimeiroAtaquePirata();
}

void Jogo::goto_sala(const int &id, const int &sala_x, const int &sala_y) {


	if (this->nave_jogo.getRoom(sala_x,sala_y) == nullptr) {
		cout << "A sala nao existe na nave!" << endl;
		return;
	}
	else {
		for (int i = 0; i < 3; i++) {
			for (int j = 0; j < 4; j++) {
				if (this->nave_jogo.getRoom(i,j) != nullptr) {
					if (this->nave_jogo.getRoom(i,j)->move_pessoa(id, sala_x, sala_y) == true){
						cout << "Pessoa movida com sucesso!" << endl;
						break;
					}
				}
			}
		}
	}
}


void Jogo::updateDistance() {

	 this->nave_jogo.updateDistance();
}

int Jogo::getDistance() {

	int dist;
	dist = this->nave_jogo.showDistance();
	return dist;
}