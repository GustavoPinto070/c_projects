#include <stdio.h>
#define TURNOS 4
#define ALUNOS 25

/* Prototipos das Funcoes */
void lerNotas(int v[], int tamanho);
int calcularAprov(int v[], int tamanho);
int calcularMaisAlta(int v[], int tamanho);
float calcularMedia(int v[], int tamanho);

int main() {
  int i, aprovacoes[TURNOS], alta[TURNOS], notas[TURNOS][ALUNOS];
  float media[TURNOS];
  for (i = 0; i < TURNOS; i++)
    lerNotas(notas[i], ALUNOS);
  for (i = 0; i < TURNOS; i++) {
    aprovacoes[i] = calcularAprov(notas[i], ALUNOS);
    alta[i] = calcularMaisAlta(notas[i], ALUNOS);
    media[i] = calcularMedia(notas[i], ALUNOS);
  }
  for (i = 0; i < TURNOS; i++)
    printf("Turno: %d Aprovacoes: %d, Nota mais alta: %d Media: %f\n", i,
           aprovacoes[i], alta[i], media[i]);
  return 0;
}

/* The functions below are the same as in notas_base.c, but they are repeated here
   for completeness and to avoid dependencies between files. In a real project,
   we would typically have these functions in a separate file and include it. */
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