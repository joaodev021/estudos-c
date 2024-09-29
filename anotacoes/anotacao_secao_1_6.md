Vamos entender o que está acontecendo nesse trecho de código de uma maneira bem simples e didática. O objetivo aqui é criar um programa que conte quantos dígitos (0 a 9), quantos espaços em branco (como espaços, tabulações e novas linhas) e quantos outros caracteres aparecem na entrada.

### O que é um **array**?

Primeiro, o programa usa uma estrutura chamada **array**. Um array é como uma lista de vários valores, onde cada valor é guardado em uma posição específica, que chamamos de **índice**. Aqui, estamos usando um array chamado `ndigit` para guardar a contagem de cada dígito, ou seja, quantas vezes cada número (0 a 9) aparece.

- `ndigit[0]` guarda quantas vezes o número 0 apareceu.
- `ndigit[1]` guarda quantas vezes o número 1 apareceu.
- E assim por diante até `ndigit[9]`, que conta as vezes que o número 9 apareceu.

A vantagem de usar um array é que, em vez de criar dez variáveis separadas (uma para cada número), colocamos todas em uma única "caixinha" chamada `ndigit`.

### Entendendo o Código

Vamos destrinchar o programa linha por linha para entender como ele faz essas contagens.

#### 1. **Declarações e Inicializações**
```c
int c, i, nwhite, nother;
int ndigit[10];
nwhite = nother = 0;
```
- `c` é a variável que vai guardar os caracteres que o programa lê.
- `nwhite` conta quantos espaços em branco temos.
- `nother` conta quantos caracteres que **não** são dígitos nem espaços em branco aparecem.
- `ndigit[10]` é o nosso array que conta os dígitos.

Inicializamos as variáveis `nwhite` e `nother` com zero, porque ainda não contamos nada.

Depois, com o seguinte pedaço:
```c
for (i = 0; i < 10; ++i)
    ndigit[i] = 0;
```
Estamos garantindo que todas as posições do array `ndigit` também comecem com zero, ou seja, inicialmente dizemos que não apareceu nenhum número ainda.

#### 2. **Leitura e Contagem de Caracteres**
```c
while ((c = getchar()) != EOF)
```
Aqui o programa entra num loop para ler cada caractere da entrada (que pode ser digitada pelo teclado, por exemplo) até que chegue ao **EOF** (que significa "fim do arquivo", ou seja, quando não há mais caracteres para ler).

Agora vem a parte onde decidimos o que o caractere lido é: um dígito, um espaço em branco ou outro caractere qualquer.

#### 3. **Verificando se é um dígito**
```c
if (c >= '0' && c <= '9')
    ++ndigit[c - '0'];
```
Esse trecho verifica se o caractere lido (`c`) é um número entre '0' e '9'. Se for, ele atualiza o array `ndigit` na posição correspondente ao número lido. Mas por que `c - '0'`?

- Os números em C são guardados como caracteres, então '0' é diferente de 0. O truque aqui é transformar o caractere '0', '1', ..., '9' em seus valores numéricos correspondentes. Por exemplo:
  - Se `c` for '0', `c - '0'` resulta em 0, que é o índice correto no array `ndigit`.
  - Se `c` for '1', `c - '0'` resulta em 1, e assim por diante.

#### 4. **Verificando se é um espaço em branco**
```c
else if (c == ' ' || c == '\n' || c == '\t')
    ++nwhite;
```
Aqui, o programa verifica se o caractere lido é um espaço (' '), uma nova linha (`\n`) ou uma tabulação (`\t`). Se for, ele adiciona 1 à variável `nwhite`.

#### 5. **Contando outros caracteres**
```c
else
    ++nother;
```
Se o caractere não for nem um dígito nem um espaço em branco, então ele é classificado como "outro" e a variável `nother` é incrementada.

#### 6. **Imprimindo os Resultados**
```c
printf("dígitos =");
for (i = 0; i < 10; ++i)
    printf(" %d", ndigit[i]);
printf(", espaços em branco = %d, outros = %d\n", nwhite, nother);
```
Depois que todas as contagens são feitas, o programa imprime os resultados:
- Ele mostra quantas vezes cada número de 0 a 9 apareceu.
- Depois, mostra quantos espaços em branco foram encontrados.
- E, por fim, quantos outros caracteres apareceram.

### Recapitulando:
- O programa usa **arrays** para guardar a contagem dos dígitos.
- Ele lê caracteres um por um e os classifica como dígitos, espaços em branco ou outros.
- No final, imprime quantas vezes cada tipo de caractere apareceu.

### Reflexão

Entendi que os arrays são úteis para lidar com vários valores relacionados sem precisar criar várias variáveis separadas. Isso facilita o código e o torna mais organizado. Também percebi que as operações com caracteres podem ser um pouco "mágicas" no começo, como o uso de `c - '0'`, mas é interessante como tudo se encaixa quando começamos a entender que caracteres são, na verdade, números disfarçados.

Ainda estou me acostumando com a ideia de usar loops e condições para organizar as ações do programa, mas o uso de `if` e `else if` para tomar decisões faz muito sentido. Cada vez que um caractere é lido, o programa decide o que ele é e como deve contar.

Agora, estou curioso para ver como a estrutura `switch`, mencionada no texto, pode tornar essa lógica mais simples, e isso será explorado no futuro.
