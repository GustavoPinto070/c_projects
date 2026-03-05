/* iaed26 - ist1118070 - lab05/ex01 */
#include <stdio.h>

#define ALUNOS 10
#define DISCIPLINAS 5

// Calcula a soma dos entusiasmos para uma determinada disciplina
long score_disciplina(int disciplina, int valores[ALUNOS][DISCIPLINAS]) {
  long soma = 0;
  for (int i = 0; i < ALUNOS; i++) {
    soma += valores[i][disciplina];
  }
  return soma;
}

// Calcula a soma dos entusiasmos para um determinado aluno
long score_aluno(int aluno, int valores[ALUNOS][DISCIPLINAS]) {
  long soma = 0;
  for (int j = 0; j < DISCIPLINAS; j++) {
    soma += valores[aluno][j];
  }
  return soma;
}

int main() {
  int valores[ALUNOS][DISCIPLINAS] = {0}; // Inicializa tudo a 0
  int n, a, d, v;

  // Leitura do número de entradas
  if (scanf("%d", &n) != 1)
    return 0;

  // Preenchimento da matriz
  for (int i = 0; i < n; i++) {
    if (scanf("%d %d %d", &a, &d, &v) == 3) {
      if (a >= 0 && a < ALUNOS && d >= 0 && d < DISCIPLINAS) {
        valores[a][d] = v;
      }
    }
  }

  // Cálculo da disciplina mais popular
  int melhor_d = 0;
  long max_score_d = score_disciplina(0, valores);
  for (int j = 1; j < DISCIPLINAS; j++) {
    long atual = score_disciplina(j, valores);
    if (atual > max_score_d) {
      max_score_d = atual;
      melhor_d = j;
    }
  }

  // Cálculo do aluno mais entusiástico
  int melhor_a = 0;
  long max_score_a = score_aluno(0, valores);
  for (int i = 1; i < ALUNOS; i++) {
    long atual = score_aluno(i, valores);
    if (atual > max_score_a) {
      max_score_a = atual;
      melhor_a = i;
    }
  }

  // Output dos resultados
  printf("%d\n", melhor_d);
  printf("%d\n", melhor_a);

  return 0;
}