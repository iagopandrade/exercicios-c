#include <stdio.h>

int main() {
	int a, b, c;	
	printf("Informe o tamanho do segmente de reta a: ");
    scanf("%d", &a);
	printf("Informe o tamanho do segmente de reta b: ");
    scanf("%d", &b);
	printf("Informe o tamanho do segmente de reta c: ");
    scanf("%d", &c);
	
	if(a + b > c && a + c > b && b + c > a) {
		if(a == b && b == c) printf("Triangulo equilatero");
		else if(a == b && b != c) printf("Triangulo isosceles");
		else printf("Triangulo escaleno");
	}
	return 0;
}
