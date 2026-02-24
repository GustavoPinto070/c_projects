/* Demonstra a diferenca entre copiar para um buffer fixo (strcpy) e duplicar (strdup) */
#define _GNU_SOURCE
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    char original[] = "ADN_REPLICANTE";
    char buffer_estatico[20]; // Espaco pre-alocado na Stack
    char *clone_dinamico;     // Apenas um ponteiro, sem espaco ainda

    // 1. Usando strcpy: Precisas de garantir que o buffer_estatico e grande o suficiente
    strcpy(buffer_estatico, original);
    printf("Copia Estatica (strcpy): %s\n", buffer_estatico);

    // 2. Usando strdup: Ele mede, aloca no Heap e copia tudo sozinho
    clone_dinamico = strdup(original);
    
    if (clone_dinamico != NULL) {
        printf("Clone Dinamico (strdup): %s\n", clone_dinamico);
        free(clone_dinamico); // Obrigatorio libertar a memoria do Heap
    }

    return 0;
}