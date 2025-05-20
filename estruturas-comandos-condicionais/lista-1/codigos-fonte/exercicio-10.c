#include <stdio.h>

int main() {
	float n1, n2, media;
	int p1 = 2, p2 = 3;
	
	printf("Informe a nota da N1: ");
    scanf("%f", &n1);
    printf("Informe a nota da N2: ");
    scanf("%f", &n2);
    
    media = (n1 * p1 + n2 * p2) / (p1 + p2);
    
    if(media >= 7.0) printf("Media: %2.f\nSituacao: Aprovado", media);
    else if(media >= 4.0 && media < 7.0) printf("Media: %2.f\nSituacao: Avaliacao final", media);
    else printf("Media: %2.f\nSituacao: Reprovado", media);
	return 0;
}
