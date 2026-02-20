/*
 * factorial.c
 * Simple C program demonstrating a recursive factorial function
 * and a small command-line `main` that reads one argument.
 *
 * Usage:
 *   Compile:
 *     gcc -Wall -Wextra -Werror -Wno-unused-result -lm factorial.c -o factorial.out
 *   Run:
 *     ./factorial.out 5
 *
 * This is intended for beginners coming from higher-level languages
 * (for example Python). The program expects a single non-negative
 * integer on the command line and prints n! (factorial of n).
 */

#include <stdio.h>   /* printf, fprintf */
#include <stdlib.h>  /* strtol, exit */

/* Compute factorial(n) recursively. For n == 0 returns 1. */
int factorial(int n)
{
    if (n == 0)
        return 1;
    else
        return n * factorial(n - 1);
}

/*
 * main - program entry point
 * argc: number of command-line arguments (including program name)
 * argv: array of strings; argv[1] should be the integer input
 */
int main(int argc, char *argv[])
{
    if (argc != 2) {
        /* Tell the user how to use the program */
        fprintf(stderr, "Usage: %s <non-negative-integer>\n", argv[0]);
        return 1;
    }

    /* Convert string to long with error checking. Beginners: strtol
       is safer than atoi because it reports conversion errors. */
    char *endptr = NULL;
    long val = strtol(argv[1], &endptr, 10);

    /* If there's leftover text or the number is negative, show an error */
    if (*endptr != '\0' || val < 0) {
        fprintf(stderr, "Invalid non-negative integer: %s\n", argv[1]);
        return 1;
    }

    /* We cast to int because factorial is defined for int above. */
    int n = (int)val;
    int result = factorial(n);

    /* Print just the numeric result followed by a newline. */
    printf("%d\n", result);
    return 0;
}
// original
#include <stdio.h>
#include <stdlib.h>

int factorial(int n)
{
    if (n==0)
        return 1;
    else
        return n*factorial(n-1);
}

// copilot did this (don't understand it yet)
int main(int argc, char *argv[])
{
    if (argc != 2) {
        fprintf(stderr, "Usage: %s <non-negative-integer>\n", argv[0]);
        return 1;
    }

    char *endptr = NULL;
    long val = strtol(argv[1], &endptr, 10);
    if (*endptr != '\0' || val < 0) {
        fprintf(stderr, "Invalid non-negative integer: %s\n", argv[1]);
        return 1;
    }

    int n = (int)val;
    int result = factorial(n);
    printf("%d\n", result);
    return 0;
}

