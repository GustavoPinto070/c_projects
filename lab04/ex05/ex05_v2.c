/* iaed26 - ist1118070 - lab04/ex05 */
#include <stdio.h>
#define MAX 1000

int main() {
  char s[MAX];
  fgets(s, MAX, stdin);
  printf("%s", s);
  return 0;
}