#include <stdio.h>

/*
 * void: Indicates the function performs an action but returns no value.
 * int tabela[]: Declares that the function receives an array of integers.
 * Since arrays are passed by reference (decaying to a pointer),
 * modifications here affect the original memory in 'main'.
 */
void inicializar_tabela(int tabela[], int tamanho) {
  int i;
  for (i = 0; i < tamanho; i++) {
    tabela[i] = 0; // Accesses and modifies the original array elements
  }
}

int main() {
  int vec[100];

  // Passes the address of the first element of 'vec' to the function
  inicializar_tabela(vec, 100);

  return 0;
}