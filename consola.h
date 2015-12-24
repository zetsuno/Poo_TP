
#ifndef __CONSOLA_H__
#define __CONSOLA_H__

#include <windows.h>

class Consola {

	HANDLE hconsola;
	HANDLE hStdin;
	HWND hwnd;

public:

	// para usar nas cores
	const static int PRETO = 0;
	const static int AZUL = 1;
	const static int VERDE = 2;
	const static int CYAN = 3;
	const static int VERMELHO = 4;
	const static int ROXO = 5;
	const static int AMARELO = 6;
	const static int BRANCO = 7;
	const static int CINZENTO = 8;
	const static int AZUL_CLARO = 9;
	const static int VERDE_CLARO = 10;
	const static int CYAN_CLARO = 11;
	const static int VERMELHO_CLARO = 12;
	const static int COR_DE_ROSA = 13;
	const static int AMARELO_CLARO = 14;
	const static int BRANCO_CLARO = 15;

	// para usar em getch
	const static char ESQUERDA = 1;
	const static char DIREITA = 2;
	const static char CIMA = 3;
	const static char BAIXO = 4;
	const static char ENTER = 13;
	const static char ESCAPE = 27;

	Consola();
	// Posiciona o cursor na posi��o x,y
	// - Os proximos cout/cin ser�o feitos a partir da�
	void gotoxy(int x, int y);

	// Limpa o ecr�
	// - Usa a c�r de fundo que estiver definida
	void clrscr();

	// Muda a c�r das letras
	// - Os cout/cin seguintes usar�o essa c�r
	void setTextColor(WORD color);

	// Muda a c�r de fundo
	// - Os printf/cout seguintes usar�o essa c�r
	// - Os clrsrc() seguintes usar�o essa c�r de fundo
	void setBackgroundColor(WORD color);

	// Muda a dimens�o do ecr� para NLinhas x NCols
	// - O redimensionamento pode falhar se o tamanho
	//   indicado for excessivo ou se for demasiado
	//   pequeno
	// - Limpa o ecr� usando a c�r que estiver definida?
	void setScreenSize(int nLinhas, int nCols);

	// Muda (tenta mudar) o tamanho da letra
	// - Esta fun��o pode falhar em determinadas situa��es
	//   (falhar = n�o muda nada)
	//   � mais prov�vel falhar no sistemas antigos (XP)
	// - Ver tamb�m setSTextSizeXP
	void setTextSize(int x, int y);

	// Muda (tenta mudar) o tamanho da letra para XP (algu�m ainda usa isso?)
	// - Esta fun��o � para usar apenas no caso do sistema
	//   ser o XP
	//   No outros sistemas existe a fun��o setTextSize
	// - Pode falhar em determinadas situa��es
	//   (falhar = n�o muda nada)
	// - Ver tamb�m setSTextSizeXP
	void setTextSizeXP(int x, int y);

	// L� um caracter sem precisar de "enter" no fim
	// - Util para fazer pausas do tipo
	//   "press any key to continue"
	// - Esta funcionalidade tamb�m se consegue de
	//   outras formas
	char getch(void);

	// As duas fun��es seguintes s�o pouco interessantes

	// Desenha uma linha usando pixeis (n�o � com caracteres)
	// - Esta � uma fun��o gr�fica. Trabalha com pixeis
	// - Os pixeis da linha ficam sobrepostos ao texto
	// Esta fun��o � pouco interessante porque:
	// - A linha n�o fica memorizada. Desaparece quando:
	//   . Se oculta e volta a mostrar a janela da consola
	//   . Se redimensiona a janela
	void drawLine(int x1, int y1, int x2, int y2, int cor);

	// Desenha um c�rculo usando pixeis (n�o � com caracteres)
	// - Esta � uma fun��o gr�fica. Trabalha com pixeis
	// - Os pixeis do c�rculo ficam sobrepostos ao texto
	// Esta fun��o � pouco interessante porque:
	// - O c�rculo n�o fica memorizado. Desaparece quando:
	//   . Se oculta e volta a mostrar a janela da consola
	//   . Se redimensiona a janela
	void drawCircle(int X, int Y, int R, int Pen, int Fill);
};

#endif