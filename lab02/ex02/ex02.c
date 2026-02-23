/* iaed26 - ist1118070 - lab02/ex02 */
#include <stdio.h>

int main() {
    int M, m;
    scanf("%d %d", &M, &m);
    if (M < m) {
        M = M + m;
        m = M - m;
        M = M - m;
    }
    printf("%d\n%d\n", m, M);
    return 0;
}