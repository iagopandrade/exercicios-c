# Exercícios C

Neste repositório, documentarei os exercícios realizados na disciplina de **Programação Computacional** do primeiro semestre do curso de **Engenharia de Computação.**  

Os exercícios serão separados em tópicos de acordo com a ordem do curso. A proposta de solução dos exercícios segue o seguinte formato:  

- **Enunciado**
- **Proposta de solução**
- **Código fonte (linkado)**  

**Exemplo:**  
1 - Ler um número inteiro e informar se ele é par ou ímpar.  
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
Código fonte: [estruturas-comandos-condicionais/lista-1/exercicio-04.c](estruturas-comandos-condicionais/lista-1/exercicio-04.c)

## Tópicos
1. **Estruturas / Comandos Condicionais**