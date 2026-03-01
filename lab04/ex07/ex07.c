/* iaed26 - ist1118070 - lab04/ex07 */
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

void apagaCaracter(char s[], char c) {
  int i = 0, j = 0;

  // while not reaching the end of the string
  while (s[i] != '\0') {

    // if the current char is to be removed, skip it; otherwise, copy it to the
    // new position
    if (s[i] != c) {
      s[j] = s[i];
      j++;
    }
    i++;
  }

  s[j] = '\0';
}

int main() {
  char s[MAX], c;

  leLinha(s);
  scanf("%c", &c);
  apagaCaracter(s, c);
  printf("%s\n", s);

  return 0;
}