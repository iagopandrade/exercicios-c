#include <stdio.h>

int main() {
	float valor;
	
	printf("Insira um numero:");
	scanf("%f", &valor);
	
	if(valor > 10.0) printf("E MAIOR QUE 10!");
	else printf("NAO E MAIOR QUE 10!");	
	return 0;
}
