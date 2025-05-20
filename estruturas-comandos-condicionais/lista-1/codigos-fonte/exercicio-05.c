#include <stdio.h>

int main() {
	int valor1, valor2, resultado;
	char operador;
	
	printf("Informe um valor real, um operador aritmetico e outro valor real: ");
	scanf("%d %c %d", &valor1, &operador, &valor2);
	
	switch(operador) {
	case '+': 
		resultado = valor1 + valor2;
		break;
	case '-': 
		resultado = valor1 - valor2;
		break;
	case '*': 
		resultado = valor1 * valor2;
		break;
	case '/': 
		resultado = valor1 / valor2;
		break;
	default: 
		printf("ERRO: O operador \"%c\" e invalido!", operador);
		return 1;
	}
	
	printf("%d %c %d = %d", valor1, operador, valor2, resultado);
	return 0;
}
