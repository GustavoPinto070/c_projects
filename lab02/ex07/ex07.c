/* iaed26 - ist1118070 - lab02/ex07 */
#include <stdio.h>

int main() {
    int n, t = 0;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {
            t += 1;
        }
    }
    printf("%d\n", t);
    return 0;
}