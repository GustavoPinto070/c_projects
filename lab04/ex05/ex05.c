/* iaed26 - ist1118070 - lab04/ex05 */
#include <stdio.h>
#define MAX 1000

// reads a line into string s and returns number of characters read
int leLinha(char s[]) {
  int i = 0;
  char c;

  // read char by char until newline or EOF
  while ((c = getchar()) != '\n' && c != EOF) {
    s[i] = c;
    i++;
  }

  // strings in C must end with the null character
  s[i] = '\0';

  return i;
}

int main() {
  char s[MAX];
  leLinha(s);
  printf("%s\n", s);
  return 0;
}