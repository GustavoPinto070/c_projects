#include <stdio.h>
// DIFERENCA is the difference between the ASCII values of 'a' and 'A', 32
#define DIFERENCA ('a' - 'A')

void substituiMinusculas(char str[]) {
  int i;
  for (i = 0; str[i] != '\0'; i++) {
    if (str[i] >= 'a' && str[i] <= 'z') {
      str[i] -= DIFERENCA;
    }
  }
}

int main() {
  char str[100] = "Hello, World!";
  substituiMinusculas(str);
  printf("%s\n", str);
  return 0;
}