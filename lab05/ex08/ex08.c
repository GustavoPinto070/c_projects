/* iaed26 - ist1118070 - lab05/ex08 */
#include <stdio.h>

typedef struct data {
  int dia;
  int mes;
  int ano;
} Data;

typedef struct hora {
  int horas;
  int minutos;
} Hora;

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

// calcula o total de minutos desde 01-01-2022 00:00
long minutos_totais(Data d, Hora h) {
  long minutos = 0;
  int a, m;

  // somar minutos dos anos completos desde 2022
  for (a = 2022; a < d.ano; a++) {
    minutos += (bissexto(a) ? 366 : 365) * 24 * 60;
  }

  // somar minutos dos meses completos do ano atual
  for (m = 1; m < d.mes; m++) {
    minutos += dias_mes(m, d.ano) * 24 * 60;
  }

  // somar minutos dos dias completos do mês atual (dia - 1)
  minutos += (d.dia - 1) * 24 * 60;

  // somar minutos da hora atual
  minutos += h.horas * 60 + h.minutos;

  return minutos;
}

int main() {
  Data d;
  Hora h;

  // leitura no formato DD-MM-AAAA HH:MM
  scanf("%d-%d-%d %d:%d", &d.dia, &d.mes, &d.ano, &h.horas, &h.minutos);
  printf("%ld\n", minutos_totais(d, h));

  return 0;
}