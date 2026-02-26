#include <stdio.h>
#define ALUNOS 25

void lerNotas(int v[], int tamanho) {
  int i;
  for (i = 0; i < tamanho; i++)
    scanf("%d", &v[i]);
}

int calcularAprov(int v[], int tamanho) {
  int i, aprovacoes = 0;
  for (i = 0; i < tamanho; i++)
    if (v[i] >= 10)
      aprovacoes++;
  return aprovacoes;
}

int calcularMaisAlta(int v[], int tamanho) {
  int i, alta = 0;
  for (i = 0; i < tamanho; i++)
    if (v[i] > alta)
      alta = v[i];
  return alta;
}

float calcularMedia(int v[], int tamanho) {
  int i, soma = 0;
  for (i = 0; i < tamanho; i++)
    soma += v[i];
  // cast 'tamanho' to float to ensure floating-point division
  return soma / (float)tamanho;
}

int main() {
  int notas[ALUNOS];
  lerNotas(notas, ALUNOS);
  printf("Aprovacoes: %d, Mais alta: %d Media: %f\n",
         calcularAprov(notas, ALUNOS), calcularMaisAlta(notas, ALUNOS),
         calcularMedia(notas, ALUNOS));
  return 0;
}
