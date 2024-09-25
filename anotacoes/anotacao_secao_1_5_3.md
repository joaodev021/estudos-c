### Anotações sobre Contagem de Caracteres e Linhas em C

**1.5.3 Contagem de Linhas**

Na próxima parte, aprendi a contar linhas de entrada, basicamente contando quantos novos caracteres de linha (`\n`) existem:

```c
#include <stdio.h>
/* contar linhas na entrada */
main()
{
    int c, nl;
    nl = 0;
    while ((c = getchar()) != EOF)
        if (c == '\n')
            ++nl;
    printf("%d\n", nl);
}
```

A lógica aqui é simples: se o caractere lido for um newline, incrementamos o contador `nl`. Também entendi que o operador `==` é usado para comparar valores, e que é muito importante não confundir isso com `=` que é usado para atribuição.

Além disso, descobri que caracteres entre aspas simples representam valores inteiros, como no caso de `'\n'` que corresponde ao valor 10 na tabela ASCII. Essa forma de representação me parece mais intuitiva do que usar o número diretamente.

### Reflexões Finais

Esses exercícios têm sido muito úteis para reforçar meu entendimento sobre a manipulação de entradas em C. Estou começando a ver como funções simples como `getchar()` e `putchar()` podem ser poderosas quando combinadas. Isso me motiva a continuar explorando mais sobre manipulação de strings e caracteres. Vou tentar agora os exercícios propostos para praticar ainda mais!
