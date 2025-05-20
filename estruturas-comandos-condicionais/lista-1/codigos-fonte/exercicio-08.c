#include <stdio.h>

int main() {
    float salario;
    int aumento;
	
    printf("Informe o valor do salario: ");
    scanf("%f", &salario);
	
    if(salario > 0.0 && salario <= 600.0) salario += salario * 0.3;
    else if(salario > 600.01 && salario <= 1100.0) salario += salario * 0.25;
    else if(salario > 1100.01 && salario <= 2400.0) salario += salario * 0.2;
    else if(salario > 2400.01 && salario <= 3550.0) salario += salario * 0.1;
    else if(salario > 3550.0) aumento = 10;
	
    printf("Valor do salario atualizado: R$%.2f", salario);
    return 0;
}
