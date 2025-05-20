#include <stdio.h>

int main() {
	float salario;
	int aumento;
	
	printf("Informe o valor do salario: R$");
	scanf("%f", &salario);
	
	if(salario > 0.0 && salario <= 600.0) aumento = 30;
	else if(salario > 600.01 && salario <= 1100.0) aumento = 25;
	else if(salario > 1100.01 && salario <= 2400.0) aumento = 20;
	else if(salario > 2400.01 && salario <= 3550.0) aumento = 15;	
	else if(salario > 3550.0) aumento = 10;	
	
	switch(aumento) {
		case 30: salario += salario * aumento / 100.0; break;
		case 25: salario += salario * aumento / 100.0; break;
		case 20: salario += salario * aumento / 100.0; break;
		case 15: salario += salario * aumento / 100.0; break;
		case 10: salario += salario * aumento / 100.0; break;
	}
	
	printf("Valor do salario atualizado: R$%2.f", salario);
	return 0;
}
