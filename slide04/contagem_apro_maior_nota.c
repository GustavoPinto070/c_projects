#include <stdio.h>

#define DIM 25

int main () {
    int i, aprovacoes = 0, alta = 0, notas[DIM];
    for (i = 0; i < DIM; i++)
        scanf("%d", &notas[i]);

    for (i = 0; i < DIM; i++) {
        if (notas[i] >= 10)
            aprovacoes++;
        if (notas[i] > alta)
            alta = notas[i];
    }
    
    printf("Aprovacoes: %d, Mais alta: %d\n", aprovacoes, alta);
    return 0;
}