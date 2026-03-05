/* iaed26 - ist1118070 - lab05/ex03 */
#include <stdio.h>

typedef struct stock {
  char nome[11];
  float valor;
  float rendimento_anual_percentagem;
} Stock;

int main() {
  int n;
  Stock atual, melhor;
  float rendimento = 0.0;

  if (scanf("%d", &n) != 1 || n <= 0) {
    return 0;
  }

  // para cada stock
  for (int i = 0; i < n; i++) {
    // leitura do nome, valor e rendimento anual
    if (scanf("%s %f %f", atual.nome, &atual.valor,
              &atual.rendimento_anual_percentagem) != 3) {
      return 0;
    }
    // calculo do rendimento atual
    float rendimento_atual =
        atual.valor * (atual.rendimento_anual_percentagem / 100.0);
    // guardar stock se o redimento for o maior encontrado
    if (rendimento_atual > rendimento) {
      rendimento = rendimento_atual;
      melhor = atual;
    }
  }
  // print do melhor stock (maior rendimento)
  printf("%s %.2f %.2f\n", melhor.nome, melhor.valor,
         melhor.rendimento_anual_percentagem);
  return 0;
}