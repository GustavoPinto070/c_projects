/* Conta caracteres do input */
#include <stdio.h>

int main () {
    long contador = 0;
    while (getchar() != EOF) {
        ++contador;
    }
    printf("%ld\n", contador);
    return 0;
}