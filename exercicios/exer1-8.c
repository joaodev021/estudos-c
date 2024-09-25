#include <stdio.h>

int main() {
    int esp, tab, nl, c;

    esp = tab = nl = 0;

    while ((c = getchar()) != EOF) {
        if (c == '\n')
            ++nl;
        if (c == ' ')
            ++esp;
        if (c == '\t')
            ++tab;
    }

    printf("Nova linha: %d\n", nl);
    printf("Espaços em branco: %d\n", esp);
    printf("Tabulações: %d\n", tab);

}
