/* iaed26 - ist1118070 - lab04/ex08 */
#include <stdio.h>
#define MAX 100

int main() {
  char s1[MAX], s2[MAX];
  int i = 0;

  // read the first string
  scanf("%s", s1);

  // read the second string
  scanf("%s", s2);

  // compare the two strings character by character
  while (s1[i] != '\0' && s2[i] != '\0') {
    // assuming the strings are made of just digits, we can compare them
    // directly, without converting each digit to an integer
    if (s1[i] > s2[i]) {
      printf("%s\n", s1);
      return 0;
    } else if (s1[i] < s2[i]) {
      printf("%s\n", s2);
      return 0;
    }
    i++;
  }
}