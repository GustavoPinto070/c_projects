#include <stdio.h>

// potencia is an example of a function that receives parameters by value, since
// it cannot change the values of base and n in main, but it can return the
// calculated power, which is assigned to the variable in main, so the variable
// in main is changed, but not the parameters in potencia
int potencia(int base, int n) {
  int i, p = 1;
  for (i = 1; i <= n; i++)
    p = p * base;
  return p;
}

int main() {
  int base, ex;
  // scanf is an example of a function that receives parameters by reference,
  // since it needs to change the values of base and ex in memory
  scanf("%d%d", &base, &ex);
  printf("%d %d %d\n", base, ex, potencia(base, ex));
  return 0;
}