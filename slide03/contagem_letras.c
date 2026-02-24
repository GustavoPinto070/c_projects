/* Conta letras do input */
#include <stdio.h>

int main () {
    long contador = 0;
    int c;

    while ((c = getchar()) != EOF) {
        if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) {
            ++contador;
        }
    }
    printf("%ld\n", contador);
    return 0;
}