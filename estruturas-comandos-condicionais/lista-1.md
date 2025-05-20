# Lista de Exercícios

## Estruturas / Comandos Condicionais – Linguagem C
1 - Ler um valor e escrever a mensagem “É MAIOR QUE 10!” se o valor lido for maior 
que 10, caso contrário escrever “NÃO É MAIOR QUE 10!”.   
```c
#include <stdio.h>

int main() {
    float valor;
	
    printf("Insira um numero:");
    scanf("%f", &valor);
	
    if(valor > 10.0) printf("E MAIOR QUE 10!");
    else printf("NAO E MAIOR QUE 10!");	
    return 0;
}
```

2 - Ler um valor real qualquer e escrever se o mesmo é (estritamente) “Positivo”, 
“Negativo” ou igual a “Zero”.  
```c
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
```

3 - Ler as notas da 1a. e 2a. avaliações de um aluno. Calcular a média aritmética simples 
e escrever uma mensagem que diga se o aluno foi ou não aprovado (considerar que nota 
igual ou maior que 7 o aluno é aprovado). Escrever também a média calculada.
```c
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
```

4 - Escreva um programa que receba/leia um número inteiro do usuário e informe se esse 
número é “Par” ou “Ímpar”.
```c
#include <stdio.h>

int main() {
    int numero;

    printf("Informe um número inteiro: ");
    scanf("%d", &numero);

    if(numero % 2 == 0) printf("O número é par!");
    else printf("O número é ímpar!");
    return 0;
}
```
Código fonte: [lista-1/exercicio-04.c](lista-1/exercicio-04.c)

6 - Escreva um programa que verifique a validade de uma senha fornecida pelo usuário. 
A senha válida é “abacate”. Devem ser impressas as seguintes mensagens: 
“ACESSO PERMITIDO”, caso a senha seja válida.  
“ACESSO NEGADO”, caso a senha seja inválida.
```c
#include <stdio.h>
#include <string.h>

int main() {
    char senha[8] = "abacate";
    char senha_fornecida[8] = "";
	
    printf("Informe a senha: ");
    scanf("%s", senha_fornecida);
    
    if(strcasecmp(senha, senha_fornecida) == 0) printf("\nACESSO PERMITIDO");
    else printf("\nACESSO NEGADO");
    return 0;
}
```
Código fonte: [lista-1/exercicio-06.c](lista-1/exercicio-06.c)

7 - Faça um programa para ler dois números inteiros A e B e informar se “A é divisível 
por B”.
```c
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
```
Código fonte: [lista-1/exercicio-07.c](lista-1/exercicio-07.c)

8 - Faça um programa para ler um salário e atualizá-lo (imprimindo na tela o novo valor) 
de acordo com a tabela abaixo, utilizando o comando “switch”: 
| Faixa salarial            | Aumento   |
| :---:                     | :---:     |
| até 600,00                | 30%       |
| 600,01 a   <br> 1.100,00  | 25%       |
| 1.100,01 a <br> 2.400,00  | 20%       |
| 2.400,01 a <br> 3.550,00  | 15%       |
| Acima de   <br> 3.550,00  | 10%       |
```c
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
```
Código fonte: [lista-1/exercicio-08.c](lista-1/exercicio-08.c)