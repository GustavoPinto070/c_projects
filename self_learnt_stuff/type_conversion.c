#include <stdio.h>

int main() {
    int num = 10; // An integer variable
    double decimal_num = 3.14; // A double variable
    char letter = 'A'; // A char variable

    // Implicit type conversion (also known as coercion) happens when we assign a value of one type to a variable of another type, and the compiler automatically converts the value to the appropriate type. For example, when we assign an integer to a double variable, the integer is implicitly converted to a double.
    double result = num + decimal_num; // Here, num (which is an int) is implicitly converted to a double before the addition, so the result will be a double (13.14)
    printf("Result of implicit type conversion: %.2lf\n", result);

    // Explicit type conversion (also known as casting) is when we manually convert a value from one type to another using a cast operator. For example, if we want to convert a double to an int, we can use a cast operator like this:
    int truncated_result = (int)result; // This will truncate the decimal part and give us 13
    printf("Result of explicit type conversion (casting): %d\n", truncated_result);

    // We can also cast a char to an int to get its ASCII value
    int ascii_value = (int)letter; // This will give us 65, which is the ASCII value of 'A'
    printf("ASCII value of '%c': %d\n", letter, ascii_value);

    // Nice trick:
    // To convert a char with a number into it's value as a number, we can subtract '0' from the char, since in the ASCII table, the characters '0' to '9' are in consecutive order starting from 48 (the ASCII value of '0'), so by subtracting '0', we effectively convert the character to its corresponding integer value.
    char digit_char = '5';
    int digit_value = digit_char - '0'; // This will give us 5, because '5' has an ASCII value of 53, and '0' has an ASCII value of 48
    printf("Integer value of character '%c': %d\n", digit_char, digit_value);

    return 0;
}