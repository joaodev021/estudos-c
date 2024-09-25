### Anotações sobre Contagem de Caracteres e Linhas em C

**1.5.2 Contagem de Caracteres**

Hoje, aprendi a criar um programa que conta caracteres em uma entrada. O código básico é assim:

```c
#include <stdio.h>
/* contar caracteres na entrada; 1ª versão */
main()
{
    long nc;
    nc = 0;
    while (getchar() != EOF)
        ++nc;
    printf("%ld\n", nc);
}
```

Uma das novidades que encontrei foi o operador `++`, que serve para incrementar um valor em um. Por exemplo, `++nc` é uma forma mais curta e eficiente de escrever `nc = nc + 1`. Isso é útil para simplificar o código. Além disso, é importante notar que o tipo `long` foi usado para garantir que conseguimos contar uma quantidade maior de caracteres sem risco de estouro (overflow).

No código, a linha `printf("%ld\n", nc);` me ensinou como exibir variáveis do tipo `long`, utilizando `%ld` para a formatação correta.

Depois, encontrei uma versão que utiliza um loop `for`:

```c
#include <stdio.h>
/* contar caracteres na entrada; 2ª versão */
main()
{
    double nc;
    for (nc = 0; getchar() != EOF; ++nc)
        ;
    printf("%.0f\n", nc);
}
```

Aqui, a estrutura do `for` é diferente, e achei interessante como a parte do corpo do loop está vazia (usando um ponto e vírgula `;` para indicar que não há um corpo real). Isso mostra que em C é possível economizar linhas de código enquanto ainda se mantém a funcionalidade. 

Uma coisa que me chamou a atenção é que, mesmo se a entrada estiver vazia, o programa consegue lidar com isso corretamente e retorna zero, que é a resposta certa. Isso me faz perceber como é importante que programas se comportem de forma inteligente com entradas vazias.
