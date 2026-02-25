/*
 * iaed26 - ist1118070 - lab02/ex04
 * Simplified Version: Sorting 3 numbers using a Temporary Variable
 */

#include <stdio.h>

int main() {
  int a, b, c, temp;

  // 1. INPUT: Get three numbers from the user
  // Let's imagine the user types: 10, 2, 5
  scanf("%d %d %d", &a, &b, &c);

  /* * PASS 1: Compare the first pair (A and B)
   * If A is bigger than B, they swap.
   * This "pushes" the larger of the two into the middle spot (B).
   */
  if (a > b) {
    temp = a; // Save A in the temporary "bucket"
    a = b;    // Put B into A's spot
    b = temp; // Put the saved value (old A) into B's spot
  }
  // Result after Pass 1: [2, 10, 5]

  /* * PASS 2: Compare the second pair (B and C)
   * If B is bigger than C, they swap.
   * This "pushes" the largest number of the whole group to the final spot (C).
   */
  if (b > c) {
    temp = b;
    b = c;
    c = temp;
  }
  // Result after Pass 2: [2, 5, 10] -> The "10" is now locked at the end!

  /* * PASS 3: The Final Check (A and B again)
   * Because Pass 2 might have moved a small number into the middle,
   * we check the first two one last time to make sure they are in order.
   */
  if (a > b) {
    temp = a;
    a = b;
    b = temp;
  }
  // Final Result: [2, 5, 10]

  // 2. OUTPUT: Print the sorted numbers
  printf("%d %d %d\n", a, b, c);

  return 0;
}