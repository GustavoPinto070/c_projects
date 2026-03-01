/* iaed26 - ist1118070 - lab04/ex02 */
#include <stdio.h>
#define VECMAX 100

int main() {
  int n, i, j, max = 0, valores[VECMAX];

  // get number (n) of inputs
  scanf("%d", &n);

  // get each input (n inputs) and find the maximum value among them
  for (i = 0; i < n; i++) {
    scanf("%d", &valores[i]);
    if (valores[i] > max) {
      max = valores[i];
    }
  }

  // print for each line (max lines)
  for (i = 0; i < max; i++) {
    // print * each time, according to the value of each input, printing
    // a star if the value of the input is greater than the current line number
    // (i), this fills the stars from the top down
    for (j = 0; j < n; j++) {
      if (valores[j] > i) {
        printf("*");
      } else {
        printf(" ");
      }
    }
    printf("\n");
  }
}