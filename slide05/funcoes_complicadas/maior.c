#include <stdio.h>

int maior(int vec[], int vec_size) {
  int i, max = vec[0];
  for (i = 1; i < vec_size; i++) {
    if (vec[i] > max) {
      max = vec[i];
    }
  }
  return max;
}

int main() {
  int vec[] = {3, 1, 4, 1, 5, 9, 2, 67, 5, 3};
  // calculate the size of the array by dividing the total size of the array by
  // the size of one element
  int vec_size = sizeof(vec) / sizeof(vec[0]);
  printf("%d\n", maior(vec, vec_size));
  return 0;
}