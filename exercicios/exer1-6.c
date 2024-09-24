#include <stdio.h>
int main() {
    int c;

    printf("Digite algum caractere ou pressione Ctrl + D: \n");

    while ((c = getchar()) != EOF) {
        printf("Caracteres encontrados: %d\n", c != EOF);

    }

    printf("Encontrado o EOF: %d\n", c != EOF);

    return 0;

}
