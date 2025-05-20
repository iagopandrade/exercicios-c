#include <stdio.h>

int main() {
	int numero;
	
	printf("Digite um numero inteiro: ");
	scanf("%d", &numero);
	
	if(numero % 2 == 0) printf("\nO numero informado e par!");
	else printf("\nO numero informado e impar!");
	return 0;
}
