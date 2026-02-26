#include <stdio.h>

// this function receives a copy of the value of i, so it cannot change the
// value of i in main
void inc(int valor) { valor++; }

int main() {
  int i = 0;
  inc(i);
  printf("%d\n", i);
  return 0;
}