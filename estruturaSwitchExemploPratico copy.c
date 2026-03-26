#include <stdio.h>

int main () {
	int dia;

	printf("Entre o valor do dia: ");
	scanf("%d", &dia);

	switch (dia)
	{
	case 1:
		printf("Domingo");
	break;
	case 2:
		printf("Segunda");
	break;
	case 3:
		printf("Terça");
	break;
	case 4:
		printf("Quarta");
	break;
	case 5:
		printf("Quinta");
	break;
	case 6:
		printf("Sexta");
	break;

	break;
	default:
		printf("Sábado");
	break;
	}
	
	

	return 0;
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
