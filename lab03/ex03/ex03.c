/* iaed26 - ist1118070 - lab03/ex03 */
#include <stdio.h>

void cruz(int N) {
    int i, j;

    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            // diagonais (i == j) ou (i + j == N - 1)
            if (i == j || i + j == N - 1) {
                printf("*");
            } else {
                printf("-");
            }
            
            // espaço entre, mas sem no final da linha
            printf("%s", j < N - 1 ? " " : "");
        }
        // nova linha após cada linha da cruz
        printf("\n");
    }
}

int main() {
    int N;
    scanf("%d", &N);
    cruz(N);
    return 0;
}