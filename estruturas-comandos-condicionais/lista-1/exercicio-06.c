#include <stdio.h>
#include <string.h>

int main() {
	char senha[8] = "abacate";
	char senha_fornecida[8] = "";
	
	printf("Informe a senha: ");
	scanf("%s", senha_fornecida);
    
	if(strcasecmp(senha, senha_fornecida) == 0) printf("ACESSO PERMITIDO");
	else printf("ACESSO NEGADO");
	return 0;
}
