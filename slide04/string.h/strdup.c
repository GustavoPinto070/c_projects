/* Duplica uma string com strdup e inverte a ordem dos caracteres da cópia */
#define _GNU_SOURCE

#include <stdio.h>
#include <string.h>
#include <stdlib.h> // Necessário para o strdup e free

int main() {
    char original[] = "Estrutura";
    
    char *copia = strdup(original);

    int i = 0;
    int j = strlen(copia) - 1;// Índice do último caractere da string (excluindo o terminador nulo, \0)
    char temp;

    while (i < j) {
        temp = copia[i];
        copia[i] = copia[j];
        copia[j] = temp;
        
        i++;
        j--;
    }

    printf("Original: %s\n", original);
    printf("Invertida: %s\n", copia);

    free(copia);
    
    return 0;
}