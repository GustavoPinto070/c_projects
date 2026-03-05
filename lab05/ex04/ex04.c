/* iaed26 - ist1118070 - lab05/ex04 */
#include <stdio.h>

#define MAXDIM 100

int ganha(int dim, char tab[MAXDIM][MAXDIM], char jogador) {
  int i, j;

  // por cada linha
  for (i = 0; i < dim; i++) {
    // por cada coluna
    for (j = 0; j < dim; j++) {
      // começando numa casa do jogador, verificar 3 em linha partindo dessa
      if (tab[i][j] == jogador) {
        // linha (todos mesma linha, coluna incrementa, dentro do tabuleiro)
        if (j + 2 < dim && tab[i][j + 1] == jogador && tab[i][j + 2] == jogador)
          return 1;

        // coluna (todos mesma coluna, linha incrementa, dentro do tabuleiro)
        if (i + 2 < dim && tab[i + 1][j] == jogador && tab[i + 2][j] == jogador)
          return 1;

        // diagonal principal (colunas e linhas incrementam, dentro do
        // tabuleiro)
        if (i + 2 < dim && j + 2 < dim && tab[i + 1][j + 1] == jogador &&
            tab[i + 2][j + 2] == jogador)
          return 1;

        // diagonal secundaria (linha incrementa, coluna decrementa, dentro do
        // tabuleiro)
        if (i + 2 < dim && j - 2 >= 0 && tab[i + 1][j - 1] == jogador &&
            tab[i + 2][j - 2] == jogador)
          return 1;
      }
    }
  }
  // else, não foi encontrado 3 em linha, return false (0)
  return 0;
}

int main() {
  int dim, n;
  char tab[MAXDIM][MAXDIM];

  // inicializar com espaços vazios
  for (int i = 0; i < MAXDIM; i++)
    for (int j = 0; j < MAXDIM; j++)
      tab[i][j] = ' ';

  // n jogadas
  if (scanf("%d %d", &dim, &n) != 2)
    return 0;

  // por cada jogada
  for (int i = 0; i < n; i++) {
    int h, v;
    char c;
    // ler coordenadas
    if (scanf("%d %d %c", &h, &v, &c) == 3) {
      // introduzir no tabuleiro, nas coordenadas, o jogador
      tab[v][h] = c; // v é vertical (linha), h é horizontal (coluna)
    }
  }

  // verificar vitórias
  int ganha_x = ganha(dim, tab, 'x');
  int ganha_o = ganha(dim, tab, 'o');

  // return print message
  if (ganha_x && !ganha_o) {
    printf("x\n");
  } else if (ganha_o && !ganha_x) {
    printf("o\n");
  } else {
    printf("?\n");
  }

  return 0;
}