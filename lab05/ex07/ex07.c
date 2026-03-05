/* iaed26 - ist1118070 - lab05/ex07 */
#include <stdio.h>

typedef struct data {
  int dia;
  int mes;
  int ano;
} Data;

// retorna 1 se o ano fôr bissexto, 0 caso contrário
int bissexto(int ano) {
  return (ano % 400 == 0) || (ano % 4 == 0 && ano % 100 != 0);
}

// retorna o número de dias de um determinado mês
int dias_mes(int mes, int ano) {
  int dias[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
  if (mes == 2 && bissexto(ano))
    return 29;
  return dias[mes - 1];
}

void print_Data(Data d) { printf("%02d-%02d-%d\n", d.dia, d.mes, d.ano); }

// calcula e retorna a data do dia seguinte
Data dia_seguinte(Data d) {
  d.dia++;

  // se ultrapassar os dias do mês, avança o mês
  if (d.dia > dias_mes(d.mes, d.ano)) {
    d.dia = 1;
    d.mes++;
  }

  // se ultrapassar o mês 12, avança o ano
  if (d.mes > 12) {
    d.mes = 1;
    d.ano++;
  }

  return d;
}

int main() {
  Data d;
  scanf("%02d-%02d-%d", &d.dia, &d.mes, &d.ano);
  d = dia_seguinte(d);
  print_Data(d);
  return 0;
}