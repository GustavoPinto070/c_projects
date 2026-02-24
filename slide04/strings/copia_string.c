#include <stdio.h>

#define DIM 100

int main() {
    int c, i;
    char origem[DIM], destino[DIM];
    
    for (i = 0; i< DIM-1 && (c=getchar()) != EOF && c != '\n'; i++)
        origem[i] = c;
    origem[i] = '\0';

    for(i = 0; origem[i] != '\0'; i++)
        destino[i] = origem[i];
    destino[i] = '\0';

    printf("Origem: %s\nDestino: %s\n", origem, destino);
    return 0;
}