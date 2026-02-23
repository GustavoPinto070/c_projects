/* iaed26 - ist1118070 - lab02/ex10 */
#include <stdio.h>

int main() {
    int n, c = 0, s = 0;
    scanf("%d", &n);
    while (n > 0) {
        c += 1; // contar o número de dígitos
        
        s += n % 10; // somar o último dígito
        n /= 10; // remover o último dígito
    }
    printf("%d\n%d\n", c, s);
    return 0;
}