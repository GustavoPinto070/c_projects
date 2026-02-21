// refer to the cheat_sheet for extra info
// refer to the variables.c for the data type 'int' skipped hered

#include <stdio.h>

int main() {
    double number = 123.45678; // A double is a floating-point data type that can hold decimal numbers, it has more precision than float
    double big_number = 1.7e+308; // We can also use scientific notation to represent very large or very small numbers, 'e' stands for exponent, so this means 1.7 * 10^308
    float float_number = 3.1416f; // A float is a floating-point data type that can hold decimal numbers, it has less precision than double, we can specify that a number is a float by adding 'f' at the end
    char letter = 'A'; // A char is a data type that can hold a single character, it is enclosed in single quotes

    // When printing a double, we can specify the number of decimal places using %.2lf, which means to print the double with 2 decimal places
    printf("Number: %.2lf\n", number);

    // When printing a double in scientific notation, we can use %e to indicate that we want to print the number in scientific notation
    printf("Big number: %e\n", big_number);

    // When printing a float, we can specify the number of decimal places using %.2f, which means to print the float with 2 decimal places
    printf("Float number: %.2f\n", float_number);

    // When printing a char, we use %c to indicate that we want to print a character
    // We can also print the ASCII value of the character by using %d, which means to print an integer, since a char is stored as an integer in memory
    printf("Letter: %c, ASCII value: %d\n", letter, letter);

    // We can also use the sizeof operator to find out how much memory a data type or variable takes up in bytes, it returns a value of type size_t, which is an unsigned integer type
    printf("Size of double: %zu bytes\n", sizeof(number));
    printf("Size of float: %zu bytes\n", sizeof(float_number));
    printf("Size of char: %zu bytes\n", sizeof(letter));

    return 0;
}
