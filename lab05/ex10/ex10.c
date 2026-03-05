/* iaed26 - ist1118070 - lab05/ex10 */
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

int main() {
  long minutos_input;
  Data d = {1, 1, 2022};
  Hora h = {0, 0};
  long min_dia = 24 * 60;
  long m_ano;

  scanf("%ld", &minutos_input);

  // subtrair minutos de anos completos
  while (minutos_input >= (m_ano = (bissexto(d.ano) ? 366 : 365) * min_dia)) {
    minutos_input -= m_ano;
    d.ano++;
  }

  // subtrair minutos de meses completos
  while (minutos_input >= (long)dias_mes(d.mes, d.ano) * min_dia) {
    minutos_input -= (long)dias_mes(d.mes, d.ano) * min_dia;
    d.mes++;
  }

  // calcular dia, hora e minuto final
  d.dia += minutos_input / min_dia;
  minutos_input %= min_dia;

  h.horas = minutos_input / 60;
  h.minutos = minutos_input % 60;

  // mostra a data e hora no formato DD-MM-AAAA HH:MM
  printf("%02d-%02d-%d %02d:%02d\n", d.dia, d.mes, d.ano, h.horas, h.minutos);

  return 0;
}