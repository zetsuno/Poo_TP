#include "Jogo.h"


Jogo::Jogo()
{
}

Jogo::~Jogo()
{
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
	cout << (char)179 << "INFORMACOES:";
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
	return false;

}


void Jogo::fazcomando()
{
	string str, nome_ent;
	int num_sala;
	vector<sala>salas;


	istringstream is(comando);
	is >> str;

	if (str == "move")
	{
		istringstream is;
		
		is >> str >> nome_ent >> num_sala;

		if (num_sala <= 0 || num_sala >= 13)
		{
			c.gotoxy(10, 1);
			cout << "Erro no tamanho da sala ou nome da entidade";
			lecomando();
		}
		
		
	}

	

}

void Jogo::inicia_jogo(int num_crew_mem)
{
	string nome[] = {"A","B","C","D","E","F","G"};
	
	// fica por resolver gerar letras difereentes


	for (int i = 0; i < num_crew_mem; i++)
	{
		crew_member *a = new crew_member(nome[i]);
		cm.push_back(a);


		nave_jogo.salas[1][3]->addEntidade(a);
	}


	
}

void Jogo::mostra(){

	//c.gotoxy(10,10);
	//cout << nave_jogo.salas[0][0]->toString();
	for (int i = 0; i < 3; i++)
		for (int j = 0; j < 4; j++)
		{
			if (nave_jogo.salas[i][j] != NULL)
			nave_jogo.salas[i][j]->mostra_info_sala(10 + j * 20, 10 + i * 6, c); //i=y é as linhas e j=x é as colunas
		}
	
	


}
