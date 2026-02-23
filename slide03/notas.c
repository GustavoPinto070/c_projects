/* Contagem de Aprovações e Reprovações de lista de notas */
#include <stdio.h>

#define NOTA_MIN_APROVACAO 10

int main () {
    int v, notas = 0, aprovacoes = 0, maior_nota = 0, soma_notas = 0;
    scanf("%d", &v);
    while (v >= 0) {
        notas++;
        soma_notas += v;
        if (v >= NOTA_MIN_APROVACAO) {
            aprovacoes++;
        }
        if (v > maior_nota) {
            maior_nota = v;
        }
        scanf("%d", &v);
    }
    int media = notas > 0 ? (soma_notas / notas) : 0;
    printf("Total: %d, Aprovacoes: %d, Reprovacoes: %d, Maior Nota: %d, Media: %d\n", 
    notas, aprovacoes, notas-aprovacoes, maior_nota, media);
    return 0;
}
