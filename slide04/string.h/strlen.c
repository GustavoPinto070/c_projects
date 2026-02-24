/* Verifica se a string tem pelo menos 8 caracteres usando strlen */
#include <stdio.h>
#include <string.h>

int main() {
    char password[] = "1234567";
    int tamanho = strlen(password);
    tamanho >= 8 ? printf("Senha forte\n") : printf("Senha fraca\n");
    return 0;
}