#include <stdio.h>

void piramide(int N) {
    int i, j;

    // cada linha
    for (i = 1; i <= N; i++) {
        // espaços à esquerda
        if (i < N) {
            printf("%*c", (N - i) * 2, ' ');
        }
        
        // números à esquerda (exceto meio)
        for (j = 1; j < i; j++) {
            printf("%d ", j);
        }

        // números à direita (inclui meio, sem ultimo)
        for (j = i; j > 1; j--) {
            printf("%d ", j);
        }

        // ultimo numero + nova linha
        printf("1\n");
    }
}

int main() {
    int N;
    scanf("%d", &N);
    piramide(N);
    return 0;
}