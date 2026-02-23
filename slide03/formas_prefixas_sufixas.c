/* A utilização dos operadores ++ e -- de forma prefixa ou 
sufixa pode influenciar a execução do programa */
#include <stdio.h>

int main() {
    int i, j;
    i = 1;
    j = ++i; // i é incrementado antes de ser atribuído a j
    printf("%d %d\n", i, j);

    i = 1;
    j = i++; // i é atribuído a j antes de ser incrementado
    printf("%d %d\n", i, j);
    return 0;
}