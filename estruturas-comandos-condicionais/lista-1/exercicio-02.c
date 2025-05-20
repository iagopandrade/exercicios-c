#include <stdio.h>

int main() {
	float valor = 0.0;
	
	printf("Insira um numero: ");
	scanf("%f", &valor);
	
	if(valor > 0.0) printf("Positivo");
	else if(valor < 0.0) printf("Negativo");
	else printf("Zero");
	return 0;
}
