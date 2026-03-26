#include <stdio.h>

int main () {
	int menu;

	// Iniciar jogo | Ver regras | Sair

	printf("Menu principal\n");
	printf("1. Iniciar jogo\n");
	printf("2. Ver regras\n");
	printf("3. Sair\n");
	printf("Escolha uma opção\n");
	scanf("%d", &menu);

	switch (menu) {
		case 1: 
			printf("Iniciando o jogo...\n");
			break;
		case 2: 
 			printf("Regras do Jogo:\n");
      		printf("1. Regra 1\n");
    		printf("2. Regra 2\n");
      		printf("3. Regra 3\n");
      		// Código para exibir as regras
			break;
		case 3: 
			printf("Saindo...\n");
			break;
		default: 
			printf("Opção inválida. Tente novamente.\n");
	}


}
