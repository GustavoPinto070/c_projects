/* iaed26 - ist1118070 - lab02/ex04 */
#include <stdio.h>

int main() {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    if (a > b) {
        a = a + b;
        b = a - b;
        a = a - b;
    }
    if (b > c) {
        b = b + c;
        c = b - c;
        b = b - c;
    }
    if (a > b) {
        a = a + b;
        b = a - b;
        a = a - b;
    }
    printf("%d %d %d\n", a, b, c);
    return 0;
}