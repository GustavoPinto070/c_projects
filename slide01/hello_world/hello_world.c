#include <stdio.h>

/*
 * hello_world.c
 * Minimal program that prints "Hello, world!" to the console.
 *
 * This file is for absolute beginners. To compile and run:
 *   gcc -Wall -Wextra -Werror -Wno-unused-result -o hello_world.out hello_world.c
 *   ./hello_world.out
 *
 * The `printf` function writes formatted text to standard output.
 */

int main()
{
    /* Print a greeting and a newline character. */
    printf("Hello, world!\n");
    /* Return 0 to indicate the program completed successfully. */
    return 0;
}