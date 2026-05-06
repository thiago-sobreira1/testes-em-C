#include <stdio.h>

int main () {
	// Número 0 pra representar água
	// Número 3 para representar uma parte do návio

	char linha[10] = {'A','B','C','D','E','F','G','H','I','J'};
	int j;
	/*
	int coluna[10] {
		{""}
	}; 
	*/

	// Linha [i]  e  Coluna [j]
	int tabuleiro[10][10] = {
		{0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
		{0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
		{0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
		{0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
		{0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
		{0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
		{0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
		{0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
		{0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
		{0, 0, 0, 0, 0, 0, 0, 0, 0, 0}
	};

	printf(" TABULEIRO BATALHA NAVAL \n");
	printf(" ");
	for (int j = 0; j < 10; j++) {
		printf("%c ", linha[j]);
	};


	//Imprimindo resultado
	/* printf("Escolha uma posição na vertical (letra) e horizontal (número)"); */
	/*
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 1; j++) {
			printf("%d", tabuleiro[i][j]);
		}
	}
	*/

	return 0;
}
