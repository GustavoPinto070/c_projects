/* iaed26 - ist1118070 - lab05/ex09 */
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

// calcula o total de minutos desde 01-01-0000 00:00
long minutos_totais(Data d, Hora h) {
  long minutos = 0;
  int a, m;

  // somar minutos dos anos completos
  for (a = 0; a < d.ano; a++) {
    minutos += (bissexto(a) ? 366 : 365) * 24 * 60L;
  }

  // somar minutos dos meses completos do ano atual
  for (m = 1; m < d.mes; m++) {
    minutos += dias_mes(m, d.ano) * 24 * 60L;
  }

  // somar minutos dos dias completos, horas e minutos
  minutos += (d.dia - 1) * 24 * 60L;
  minutos += h.horas * 60L + h.minutos;

  return minutos;
}

int main() {
  Data d1, d2;
  Hora h1, h2;
  long m1, m2;

  if (scanf("%d-%d-%d %d:%d", &d1.dia, &d1.mes, &d1.ano, &h1.horas, &h1.minutos) == 5 &&
      scanf("%d-%d-%d %d:%d", &d2.dia, &d2.mes, &d2.ano, &h2.horas, &h2.minutos) == 5) {
    
    m1 = minutos_totais(d1, h1);
    m2 = minutos_totais(d2, h2);

    // diferença
    printf("%ld\n", m2 - m1);
  }

  return 0;
}