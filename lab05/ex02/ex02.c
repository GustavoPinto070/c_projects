/* iaed26 - ist1118070 - lab05/ex02 */
#include <stdio.h>

typedef struct complexo {
  double real;
  double imag;
} Complexo;

Complexo soma(Complexo c1, Complexo c2) {
  Complexo resultado;
  resultado.real = c1.real + c2.real;
  resultado.imag = c1.imag + c2.imag;
  return resultado;
}

void print_Complexo(Complexo c) {
  if (c.imag >= 0) {
    printf("%.2lf+%.2lfi\n", c.real, c.imag);
  } else {
    printf("%.2lf%.2lfi\n", c.real, c.imag);
  }
}

int main() {
  Complexo c1, c2;
  if (scanf("%lf %lfi %lf %lfi", &c1.real, &c1.imag, &c2.real, &c2.imag) == 4) {
    print_Complexo(soma(c1, c2));
  }
  return 0;
}