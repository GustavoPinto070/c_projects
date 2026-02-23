/* Conta número de elementos de lista de números positivos */
#include <stdio.h>

int main () {
    int v;
    long contador = 0;
    scanf("%d", &v);
    while (v >= 0) {
        contador++;
        scanf("%d", &v);
    }
    printf("%ld\n", contador);
    return 0;
}