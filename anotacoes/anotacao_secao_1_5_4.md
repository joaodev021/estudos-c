### 1.5.4 Contagem de Palavras

Hoje, aprendi a fazer um programa em C que conta o número de linhas, palavras e caracteres de uma entrada. O código se baseia em um conceito simples, mas que exige atenção: identificar o que é considerado "dentro de uma palavra" e "fora de uma palavra". Eu usei duas constantes, `IN` e `OUT`, para representar esses dois estados, e isso me ajudou a deixar o código mais fácil de entender. O legal é que, em vez de usar números diretos, as constantes deixam o código mais legível.

Comecei definindo as variáveis necessárias: `nl` (número de linhas), `nw` (número de palavras) e `nc` (número de caracteres). Inicializei todas essas variáveis com zero. A ideia principal do programa é percorrer cada caractere da entrada, incrementando o contador de caracteres sempre que um caractere é lido, e o de linhas toda vez que o caractere é uma nova linha (`\n`).

Agora, a parte interessante é contar as palavras. Se o programa encontra um espaço em branco, uma tabulação (`\t`) ou uma nova linha (`\n`), isso significa que estamos "fora de uma palavra" e o estado é definido como `OUT`. Porém, se o caractere atual não for um desses e o estado anterior era `OUT`, significa que encontramos o início de uma nova palavra. Aí, o estado muda para `IN` e o contador de palavras é incrementado.

Um detalhe que achei interessante é o uso do operador `||`, que significa "OU". Com ele, eu posso verificar se o caractere é um espaço, uma nova linha ou uma tabulação tudo numa única linha. Outra coisa que me chamou atenção foi o uso do `else` no código, para garantir que se uma condição não for atendida, outra ação alternativa é tomada. Isso torna o código mais eficiente.

Estou achando bem legal ver como pequenas mudanças na forma de estruturar o código podem fazer grande diferença na clareza e funcionalidade!
