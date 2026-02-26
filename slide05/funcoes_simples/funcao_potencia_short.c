#include <stdio.h>

int potencia(int base, int n) {
  int p;
  for (p = 1; n > 0; n--)
    p = p * base;
  return p;
}

int main() {
  int i;
  for (i = 0; i < 10; i++)
    printf("%d %d %d\n", i, potencia(2, i), potencia(-3, i));
  return 0;
}