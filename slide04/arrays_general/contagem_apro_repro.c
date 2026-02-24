#include <stdio.h>

#define DIM 21

int main() {
    int i, v, total = 0, aprovacoes = 0, histograma[DIM];
    for (i = 0; i < DIM; i++) {
        histograma[i] = 0;
    }
    scanf("%d", &v);

    while (v >= 0) {
        total++;
        histograma[v]++;
        if (v >= 10) {
            aprovacoes++;
        }
        scanf("%d", &v);
    }

    printf("Total: %d, Aprovacoes: %d, Reprovacoes: %d\n", total, aprovacoes,
           total - aprovacoes);
    for (i = 0; i < DIM; i++) {
        printf("%d %d\n", i, histograma[i]);
    }

    return 0;
}