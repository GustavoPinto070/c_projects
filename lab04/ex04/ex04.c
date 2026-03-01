/* iaed26 - ist1118070 - lab04/ex04 */
#include <stdio.h>
#include <string.h>

int main() {
  char s[100];
  int i, len;

  // read input string
  scanf("%s", s);

  // get length of the string
  len = strlen(s);

  // check if the string is a palindrome
  for (i = 0; i < len; i++) {
    // i-th character from the start should match i-th character from the end
    if (s[i] != s[len - 1 - i]) {
      printf("no\n");
      return 0;
    }
  }

  // if we reach here, the string is a palindrome (no mismatches found)
  printf("yes\n");
  return 0;
}