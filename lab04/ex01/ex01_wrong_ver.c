/* iaed26 - ist1118070 - lab04/ex01 */
#include <stdio.h>
#define VECMAX 100

int main() {
  int n, i, j, valores[VECMAX];

  if (scanf("%d", &n) != 1)
    return 0;

  /* ERROR: 'i <= n' accesses index 3 if n=3.
     Valgrind: "Invalid write" (out of bounds) or "Uninitialised value"
     if scanf fails to find a 4th number. */
  for (i = 0; i <= n; i++) {
    scanf("%d", &valores[i]);
  }

  for (i = 0; i <= n; i++) {
    /* Valgrind: "Conditional jump depends on uninitialised value"
       occurs here because 'valores[3]' contains random stack garbage. */
    for (j = 0; j < valores[i]; j++) {
      putchar('*');
    }
    putchar('\n');
  }
  return 0;
}