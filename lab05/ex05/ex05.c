/* iaed26 - ist1118070 - lab05/ex05 */
#include <stdio.h>

typedef struct hora {
  int horas;
  int minutos;
} Hora;

void print_Hora(Hora t) { printf("%02d:%02d\n", t.horas, t.minutos); }

Hora soma(Hora t1, Hora t2) {
  Hora res;
  res.horas = ((t1.minutos + t2.minutos) / 60 + t1.horas + t2.horas) % 24;
  res.minutos = (t1.minutos + t2.minutos) % 60;
  return res;
}

int main() {
  Hora t1, t2;
  scanf("%02d:%02d %02d:%02d\n", &t1.horas, &t1.minutos, &t2.horas,
        &t2.minutos);
  print_Hora(soma(t1, t2));
  return 0;
}