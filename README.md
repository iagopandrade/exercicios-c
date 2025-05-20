# Exercícios C

Neste repositório, documentarei os exercícios realizados na disciplina de **Programação Computacional** do primeiro semestre do curso de **Engenharia de Computação.**  

Os exercícios serão organizados por **tópicos**, conforme a ordem do conteúdo apresentado no curso.  
Dentro de cada tópico, há **listas de exercícios**, cada uma contendo:

- `exercicios.md`: arquivo com uma lista de execícios.
- `resolucoes.md`: arquivo com as propostas de solução dos exercícios.
- `codigos/`: pasta contendo os códigos-fonte de cada exercício.

---

Cada tópico segue o seguinte formato:

```bash
programacao-computacional/
├── 01-comandos-condicionais/
│   ├── lista-1/
│   │   ├── exercicios.md
│   │   ├── resolucoes.md
│   │   └── codigos-fonte/
│   │       ├── exercicio-01.c
│   │       ├── exercicio-02.c
│   │       └── ...
│   └── ...
└── ...
```

 A proposta de solução dos exercícios segue o seguinte formato:  
```bash
1. Enunciado
2. Proposta de solução
3. Código fonte (linkado)
```

**Exemplo:**  

1 - Ler um número inteiro e informar se ele é par ou ímpar.  
```c
#include <stdio.h>

int main() {
    int numero;

    printf("Informe um numero inteiro: ");
    scanf("%d", &numero);

    if(numero % 2 == 0) printf("O numero e par!");
    else printf("O número e impar!");

    return 0;
}
```
Código fonte: [estruturas-comandos-condicionais/lista-1/codigos-fonte/exercicio-04.c](estruturas-comandos-condicionais/lista-1/codigos-fonte/exercicio-04.c)

## Tópicos
1. **Estruturas / Comandos Condicionais**
- [Lista de Exercícios - 01](estruturas-comandos-condicionais/lista-1)