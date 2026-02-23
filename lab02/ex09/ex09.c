/* iaed26 - ist1118070 - lab02/ex09 */
#include <stdio.h>

int main() {
    int n, h, m, s;
    scanf("%d", &n);
    h = n / 3600;
    n %= 3600;
    m = n / 60;
    s = n % 60;
    printf("%02d:%02d:%02d\n", h, m, s);
    return 0;
}