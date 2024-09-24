### Anotações sobre Entrada e Saída de Caracteres

Nesta seção, estudei um conjunto de programas relacionados ao processamento de dados de caracteres. A biblioteca padrão do C adota um modelo muito simples para entrada e saída. A entrada ou saída de texto é tratada como um fluxo de caracteres, onde um fluxo de texto é uma sequência de caracteres dividida em linhas, sendo que cada linha é composta por zero ou mais caracteres seguidos por um caractere de nova linha.

#### Funções Básicas: `getchar` e `putchar`

As funções `getchar` e `putchar` permitem ler e escrever um caractere por vez. Por exemplo:

```c
c = getchar();
```

Essa linha lê o próximo caractere da entrada e o armazena na variável `c`. O caractere normalmente vem do teclado, e a entrada a partir de arquivos será abordada em uma seção posterior.

A função `putchar` é utilizada para imprimir um caractere:

```c
putchar(c);
```

Essa função imprime o conteúdo da variável `c` como um caractere, geralmente na tela. É interessante notar que chamadas para `putchar` e `printf` podem ser intercaladas, e a saída aparecerá na ordem em que as chamadas foram feitas.

#### Copiando Arquivos

Com `getchar` e `putchar`, posso escrever um código útil, mesmo sem conhecer muito sobre entrada e saída. Um exemplo simples é um programa que copia sua entrada para a saída, um caractere por vez. O código em C para isso é:

```c
#include <stdio.h>
/* copia a entrada para a saída; 1ª versão */
main() {
    int c;
    c = getchar();
    while (c != EOF) {
        putchar(c);
        c = getchar();
    }
}
```

Aqui, `EOF` (end of file) é um valor distintivo retornado por `getchar` quando não há mais entrada. Como `EOF` não pode ser confundido com nenhum caractere real, declaro `c` como `int` para garantir que ele possa armazenar qualquer valor retornado por `getchar`.

#### Sintaxe e Eficácia

Experientes programadores de C costumam escrever este programa de forma mais concisa. Por exemplo, posso combinar a leitura e a verificação de `EOF` na condição do loop:

```c
#include <stdio.h>
/* copia a entrada para a saída; 2ª versão */
main() {
    int c;
    while ((c = getchar()) != EOF)
        putchar(c);
}
```

Neste caso, a variável `c` é atribuída e testada em uma única linha. O loop repete até que o final da entrada seja alcançado.

#### Importância dos Parênteses

Os parênteses na condição do `while` são essenciais. A precedência do operador `!=` é maior que a do `=`, o que significa que, sem os parênteses, o teste relacional seria executado antes da atribuição. Isso causaria um comportamento indesejado, onde `c` seria definido como 0 ou 1, dependendo se a chamada a `getchar` retornou `EOF`.

#### Exercícios Propostos

- **Exercício 1-6**: Verificar se a expressão `getchar() != EOF` resulta em 0 ou 1.
- **Exercício 1-7**: Escrever um programa que imprima o valor de `EOF`.

Esses exercícios são uma boa oportunidade para praticar a lógica do que aprendi e para entender melhor o tratamento de entradas e saídas em C.

### Conclusão

Essas funções simples, `getchar` e `putchar`, formam a base para manipulação de dados de caracteres em C. Compreender como os fluxos de entrada e saída funcionam me ajudará em programas mais complexos no futuro, pois muitos conceitos de manipulação de dados se baseiam nessas funções.
