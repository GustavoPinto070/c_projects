/* iaed26 - ist1118070 - lab03/ex07 */
#include <stdio.h>

int main() {
    int total = 0;
    int num;
    char op;

    scanf("%d", &total);

    while (getchar() != '\n') {
        scanf("%c %d", &op, &num);
        if (op == '+') {
            total += num;
        } 
        else if (op == '-') {
            total -= num;
        }
    }

    printf("%d\n", total);
    return 0;
}