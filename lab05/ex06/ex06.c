/* iaed26 - ist1118070 - lab05/ex06 */
#include <stdio.h>

typedef struct data {
  int dia;
  int mes;
  int ano;
} Data;

void print_Data(Data d) { printf("%02d-%02d-%d", d.dia, d.mes, d.ano); }

void print_both_Data(Data d1, Data d2) {
  print_Data(d1);
  printf(" ");
  print_Data(d2);
  printf("\n");
}

// retorna 1 se o primeiro fôr mais antigo, 0 caso contrário
int antigo(Data d1, Data d2) {
  // comparar anos
  if (d1.ano < d2.ano)
    return 1;
  if (d1.ano > d2.ano)
    return 0;

  // anos iguais, comparar meses
  if (d1.mes < d2.mes)
    return 1;
  if (d1.mes > d2.mes)
    return 0;

  // anos e meses iguais, comparar dias
  if (d1.dia < d2.dia)
    return 1;

  return 0; // São iguais ou d1 é mais recente
}

int main() {
  Data d1, d2;
  scanf("%02d-%02d-%d %02d-%02d-%d\n", &d1.dia, &d1.mes, &d1.ano, &d2.dia,
        &d2.mes, &d2.ano);
  antigo(d1, d2) ? print_both_Data(d1, d2) : print_both_Data(d2, d1);
  return 0;
}