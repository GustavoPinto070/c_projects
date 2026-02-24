#include <stdio.h>

#define DIM 100

int main() {
    int c, i = 0;
    char s[DIM];

    while (i < DIM - 1 && (c = getchar()) != EOF && c != '\n')
        s[i++] = c;

    s[i] = '\0';

    printf("%s\n", s);
    return 0;
}