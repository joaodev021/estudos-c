#include <stdio.h>
#define OUT 0 /* dentro de uma palavra */
#define IN 1 /* fora de uma palavra */

/* contar linhas, palavras e caracteres na entrada */
int main() {

  int c, nc, nl, nw, state;
  state = OUT; /* começa fora de uma palavra */

  nc = nl = nw = 0; /* inicializa os contadores em zero */

  while((c = getchar()) != EOF) { /* loop até o fim da entrada */
    ++nc; /* incrementa o contador de caracteres */
    if (c == '\n') /* se encontrar uma nova linha */
      ++nl; /* incrementa o contador de linhas */
    if (c == ' ' || c == '\n' || c == '\t') /* se encontrar espaço, nova linha ou tabulação */
      state = OUT; /* estamos fora de uma palavra */
    else if (state == OUT) { /* se estava fora de uma palavra e encontrou um caractere */
      state = IN; /* agora estamos dentro de uma palavra */
      ++nw; /* conta a nova palavra */
    }
  }

  printf("%d %d %d\n", nl, nc, nw);

  return 0;
}
