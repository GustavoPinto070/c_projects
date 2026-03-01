/* iaed26 - ist1118070 - lab04/ex01 */
#include <stdio.h>
#define VECMAX 100

int main() {
  int n, i, j, valores[VECMAX];

  // get number (n) of inputs
  scanf("%d", &n);

  // get each input (n inputs)
  for (i = 0; i < n; i++) {
    scanf("%d", &valores[i]);
  }

  // print for each line (n lines)
  for (i = 0; i < n; i++) {
    // print * each time, according to the value of each input, printing
    // valores[i] stars
    for (j = 0; j < valores[i]; j++) {
      printf("*");
    }
    // print new line after each line of stars
    printf("\n");
  }
}