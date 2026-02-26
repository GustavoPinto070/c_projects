#include <stdio.h>
#define MAX_CHARS 100

int lelinha(char s[], int lim);
void copia(char destino[], char origem[]);

int main() {
  int comprimento, max = 0;
  char linha[MAX_CHARS];
  char maiscomprida[MAX_CHARS];
  comprimento = lelinha(linha, MAX_CHARS);
  while (comprimento > 0) {
    if (comprimento > max) {
      max = comprimento;
      copia(maiscomprida, linha);
    }
    comprimento = lelinha(linha, MAX_CHARS);
  }
  if (max > 0)
    printf("%s\n", maiscomprida);
  return 0;
}

int lelinha(char s[], int lim) {
  int c, i;
  for (i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; i++)
    s[i] = c;
  s[i] = '\0';
  return i;
}

void copia(char destino[], char origem[]) {
  int i;
  for (i = 0; origem[i] != '\0'; i++)
    destino[i] = origem[i];
  destino[i] = '\0';
}