#include <stdio.h>

long long fatorial (int n) {
	if (n < 0) {
		return -1;
	}

	if (n == 0 || n == 1) {
		return 1;
	}

	return n * fatorial(n-1);
}

int main() {
	int numero;

	printf("Digite um número: \n");
	scanf("%d", &numero);

	long long resultado = fatorial(numero);

	if (resultado == -1) {
		printf("Fatorial não existe para números negativos.\n");
	} else {
		printf("Fatorial de %d = %d\n", numero, resultado);
	}

	return 0;

}