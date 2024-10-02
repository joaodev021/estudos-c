#include <stdio.h>
#define IN 1
#define OUT 0

int main() {
    int c, i, state;
    int length = 0;
    int count[10]; // array para contar palavras de até 10 letras

    // Inicializa o array
    for (i = 0; i < 10; ++i)
        count[i] = 0;

    state = OUT;

    // Processa os caracteres de entrada
    while ((c = getchar()) != EOF) {
        if (c == ' ' || c == '\n' || c == '\t') {
            // Quando encontra um delimitador de palavra, isso significa que
            // chegamos ao final de uma palavra
            if (state == IN) {
                if (length > 0 && length <= 10)
                    count[length - 1]++;
                length = 0;
                state = OUT;
            }
        } else {
            // Se o caractere não é um espaço, nova linha ou tabulação,
            // então é parte de uma palavra.
            if (state == OUT) {
                state = IN;
            }

            length++;
        }
    }

    // Se o último caractere for parte de uma palavra
    if (state == IN && length > 0 && length <= 10) {
        count[length - 1]++;
    }

    // Imprime o histograma
    printf("Comprimento das palavras: \n");
    for (i = 0; i < 10; ++i) {
        if (count[i] > 0) {
            printf("%d letras: ", i + 1);
            for (int j = 0; j < count[i]; ++j)
                printf("|");
            printf("\n");
        }
    }

    return 0;

}
