/* Conta palavras do input */
#include <stdio.h>

int main () {
    long contador = 0;
    int c;
    int state = 0; // 0: fora de palavra, 1: dentro de palavra

    while ((c = getchar()) != EOF) {
        if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) {
            if (state == 0) {
                ++contador;
                state = 1;
            }
        } else if (c == ' ' || c == '\n' || c == '\t') {
            state = 0;
        }
    }
    printf("%ld\n", contador);
    return 0;
}