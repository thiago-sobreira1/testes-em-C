#include <stdio.h>

int main () {
	int opcao;
	float saldo = 1000.00;

	printf("Escolha uma opção: \n");
	printf("1. Verificar saldo\n");
	printf("2. Fazer depósito\n");
	printf("3. Fazer saque\n");
	scanf("%d", &opcao);

	switch (opcao)
	{
	case 1:
		printf("O seu saldo é: R$ %f\n", saldo);
		break;
	case 2:
		printf("Digite o banco que deseja depositar\n");
		printf("Digite a agência que deseja depositar\n");
		printf("Digite a conta que deseja depositar\n");
	case 3:
		printf("Digite o valor a sacar \n");
	default:
		printf("Opção inválida");
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
