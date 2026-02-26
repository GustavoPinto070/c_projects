#include <stdio.h>

// this function receives a copy of the value of k, so it cannot change the
// value of k in main, but it can return the incremented value, which is
// assigned to k in main, so k in main is incremented
int inc(int valor) {
  valor++;
  return valor;
}

int main() {
  int k = 0;
  k = inc(k);
  printf("%d\n", k);
  return 0;
}