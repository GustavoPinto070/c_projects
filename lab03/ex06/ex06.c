/* iaed26 - ist1118070 - lab03/ex06 */
# include <stdio.h>

int main() {
    char c;
    int total = 0; // at max, 9*100
    while ((c = getchar()) >= '0' && c <= '9') total += (c - '0');
    printf("%s\n", total % 9 == 0 ? "yes" : "no");
    return 0;
}