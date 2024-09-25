#include <stdio.h>
int main() {
    int c;
    int espaco = 0;

    while ((c = getchar()) != EOF) {
        if (c == ' ') {
            if (espaco == 0) {
                putchar(c);
                espaco = 1;
            }
        } else {
            putchar(c);
            espaco = 0;
        }
    }
    
    return 0;
}
