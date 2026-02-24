/* Conta linhas do input */
#include <stdio.h>

int main () {
    int c, contador;
    contador = 0;
    while ((c = getchar()) != EOF) {
        if (c == '\n') {
            ++contador;
        }
    }
    printf("%d\n",contador);
    return 0;
}