
#include <stdio.h>

/*
 * factorial.c
 * Simple C program demonstrating a recursive factorial function.
 *
 * This file is for beginners learning about recursion and functions.
 * To compile and run:
 *   gcc -Wall -Wextra -Werror -Wno-unused-result -std=c11 -lm -o factorial.out factorial.c
 *   ./factorial.out
 *
 * The program computes and prints 5! (5 factorial) using recursion.
 */

/* factorial - compute n! recursively
 * @n: non-negative integer
 * Returns 1 for n == 0, otherwise returns n * factorial(n-1)
 */
int factorial(int n)
{
    if (n == 0)
        return 1;
    else
        return n * factorial(n - 1);
}

int main()
{
    /* Hard-coded to compute factorial of 5. */
    int n = 5;
    /* Call the recursive factorial function. */
    int result = factorial(n);
    /* Print the result with a newline character. */
    printf("Factorial of %d is: %d\n", n, result);
    /* Return 0 to indicate the program completed successfully. */
    return 0;
}
