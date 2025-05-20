#include <stdio.h>

int main() {
	float n1, n2, media;
	
	printf("Insira a nota da avaliacao 1a: ");
	scanf("%f", &n1);
	printf("Insira a nota da avaliacao 2a: ");
	scanf("%f", &n2);
	
	media = (n1 + n2) / 2.0;
	
	if(media >= 7.0) printf("Aluno aprovado!\nMedia: %.1f", media);
	else printf("Aluno reprovado!\nMedia: %.1f", media);
	return 0;
}
