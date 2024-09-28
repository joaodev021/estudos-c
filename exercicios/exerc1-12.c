#include <stdio.h>

int main() {
  int c;

  while ((c = getchar()) != EOF) {
    // Se o caractere for espaço, tabulação ou nova linha
    if (c == ' ' || c == '\n' || c == '\t') {
      // Imprime uma nova linha para separar as palavras
      putchar('\n');
    } else {
      // Se for parte de uma palavra, imprime o caractere
      putchar(c);
    }
  }

  return 0;
}
