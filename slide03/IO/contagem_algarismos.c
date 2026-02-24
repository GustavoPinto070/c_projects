/* Conta algarismos do input */
#include <stdio.h>

int main () {
    long contador = 0;
    int c;

    while ((c = getchar()) != EOF) {
        if (c >= '0' && c <= '9') {
            ++contador;
        }
    }
    printf("%ld\n", contador);
    return 0;
}