#include <stdio.h>

int main () {
	char variavel;

	printf("Digite um valor: ");
	scanf("%c", &variavel);

	switch (variavel) {
	case 'a':
		printf("código a ser executado se variável == a\n");
		printf("Teste do case 1");
	break;
	case 'b':
		printf("código a ser executado se variável == b");
	break;
	default:
		printf("código a ser executado se variável não for a nem b");
	}


/*
	int variavel1;

	switch (variavel1) {
	case valor1:
		// código a ser executado se variável == valor1
	break;
	case valor2:
		// código a ser executado se variável == valor2
	break; (vai parar a execução )
	default:
		// código a ser executado se nenhum dos casos acima for verdadeiro
	}
*/
}
