/* iaed26 - ist1118070 - lab02/ex04 */
#include <stdio.h>
#define troca(a, b) { a = a + b; b = a - b; a = a - b; }
#define if_troca(a, b) { if (a > b) { troca(a, b); } }

int main() {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    if_troca(a, b);
    if_troca(b, c);
    if_troca(a, b);
    printf("%d %d %d\n", a, b, c);
    return 0;
}