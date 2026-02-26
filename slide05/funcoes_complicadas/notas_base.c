#include <stdio.h>
#define ALUNOS 25

/* Prototipos das Funcoes */
void lerNotas(int v[], int tamanho);
int calcularAprov(int v[], int tamanho);
int calcularMaisAlta(int v[], int tamanho);
float calcularMedia(int v[], int tamanho);

int main() {
  int notas[ALUNOS];
  lerNotas(notas, ALUNOS);
  printf("Aprovacoes: %d, Mais alta: %d Media: %f\n",
         calcularAprov(notas, ALUNOS), calcularMaisAlta(notas, ALUNOS),
         calcularMedia(notas, ALUNOS));
  return 0;
}