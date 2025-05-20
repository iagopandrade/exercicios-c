#include <stdio.h>

int main() {
	int a, b;
	
	printf("Informe um numero inteiro: ");
	scanf("%d", &a);
	printf("Informe outro numero inteiro: ");
	scanf("%d", &b);
	
	if(a % b == 0) printf("%d e divisivel por %d", a, b);
	else printf("%d nao divisivel por %d", a, b);
	return 0;
}
