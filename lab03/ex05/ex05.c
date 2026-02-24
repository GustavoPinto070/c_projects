/* iaed26 - ist1118070 - lab03/ex05 */
#include <stdio.h>

// states
#define OUTSIDE 0
#define INSIDE 1

// escape sequence
#define UNESCAPED 0
#define ESCAPED 1

int main() {
    /*
    escaped: print c and escape (escaped for one char)
    unescaped:
        - if escaped sequence seen (inside message), escape for next char
        - if quote marks seen, toggle state, if state toggled of (message end, newline, \n)
        - if inside (and not escape sequence or quote marks), print char
        - else, it's ouside, do nothing (isn't shown)
    */
    int c;
    int state = OUTSIDE;
    int escape = UNESCAPED;

    while ((c = getchar()) != EOF) {
        if (escape == ESCAPED) {
            // if escaped, always print
            putchar(c);
            escape = UNESCAPED;
        } 
        else if (c == '\\') {
            // if inside and see an escape sequence, mark as escaped for next character
            if (state == INSIDE) {
                escape = ESCAPED;
            }
        } 
        else if (c == '"') {
            // if unescaped quote, toggle inside/outside state
            if (state == OUTSIDE) {
                state = INSIDE;
            } else {
                state = OUTSIDE;
                putchar('\n'); // print newline after end of quoted string
            }
        } 
        else if (state == INSIDE) {
            // if inside a quoted string, print the character
            putchar(c);
        }
    }
    return 0;
}