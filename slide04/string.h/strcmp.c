/* Compara a resposta do utilizador com a solução da charada usando strcmp */
#include <stdio.h>
#include <string.h>

int main() {
    char solucao[] = "silencio";
    char resposta[64];

    printf("Charada: O que e que se quebra mal se diz o seu nome?\n");
    printf("Resposta: ");
    scanf("%s", resposta);

    if (strcmp(resposta, solucao) == 0) {
        printf("Correto! Voce acertou.\n");
    } else {
        printf("Errado! Tente novamente.\n");
    }

    return 0;
}