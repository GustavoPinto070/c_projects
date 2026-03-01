/* iaed26 - ist1118070 - lab04/ex06 */
#include <stdio.h>
#define MAX 1000

int leLinha(char s[]) {
  int i = 0;
  char c;

  while ((c = getchar()) != '\n' && c != EOF) {
    s[i] = c;
    i++;
  }

  s[i] = '\0';

  return i;
}

void maiusculas(char s[]) {
  int i = 0;

  while (s[i] != '\0') {
    if (s[i] >= 'a' && s[i] <= 'z') {
      s[i] = s[i] - ('a' - 'A');
    }
    i++;
  }
}

int main() {
  char s[MAX];
  leLinha(s);
  maiusculas(s);
  printf("%s\n", s);
  return 0;
}