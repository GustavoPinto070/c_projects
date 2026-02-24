/* iaed26 - ist1118070 - lab03/ex04 */
#include <stdio.h>

// states
#define INSIDE 1  // after first non-zero digit
#define OUTSIDE 0 // before first non-zero digit

// zero flag constants
#define NOT_FOUND 0
#define FOUND 1

int main() {
    int c, state = OUTSIDE, zero_seen = NOT_FOUND; 

    // read characters until EOF
    while ((c = getchar()) != EOF) {
        if (c == '0') {
            if (state == INSIDE) {
                putchar(c); // print zero if already inside a word
            } else {
                zero_seen = FOUND; // mark that leading zero found
            }
        } else if (c == ' ' || c == '\n') {
            // if outside already and zero seen, a word of zeros ended, print one zero
            if (state == OUTSIDE && zero_seen == FOUND) {
                putchar('0');
            }
            putchar(c); // print the separator
            state = OUTSIDE;
            zero_seen = NOT_FOUND;
        } else {
            putchar(c); // print non-zero digit
            state = INSIDE;
            zero_seen = NOT_FOUND;
        }
    }

    // file ending in word of zeros, print one zero if needed
    if (state == OUTSIDE && zero_seen == FOUND) {
        putchar('0');
    }

    return 0;
}