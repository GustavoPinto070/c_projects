#include <stdio.h>

// this function receives a copy of the value of valor, so it cannot change the
// value of valor in main, even if we use the same name for the parameter and
// the variable in main, different scopes are created for the parameter and the
// variable in main
void inc(int valor) { valor++; }

int main() {
  int valor = 0;
  inc(valor);
  printf("%d\n", valor);
  return 0;
}
