// Addition        +
// Subtraction     -
// Multiplication  *
// Division        /  (Whole division with integers will give the quotient without the remainder, for example, 7 / 2 will give 3, not 3.5)
// Remainder       %  (Also known as modulus, it gives the remainder of the division, for example, 7 % 2 will give 1, because 7 divided by 2 is 3 with a remainder of 1)
// Increment       ++ (to increase more than 1, we can use 'age += 2;' which is the same as 'age = age + 2;')
// Decrement       -- (to decrease more than 1, we can use 'age -= 2;' which is the same as 'age = age - 2;')

// Operator precedence: Parentheses > Multiplication/Division/Modulus > Addition/Subtraction
// since this is all pretty straightforward, I will include only the little tricky details

#include <stdio.h>

int main() {
    int a = 10;
    int b = 3;

    // When performing division with integers, the result will be an integer, and any decimal part will be truncated (not rounded), so 10 / 3 will give 3, not 3.3333
    printf("Integer division: %d / %d = %d\n", a, b, a / b);

    double wrong_result = a / b; // This will still perform integer division because both a and b are integers, so result will be 3.0, not 3.3333
    double correct_result = (double)a / b; // By casting a to double, we can perform floating-point division, so correct_result will be 3.3333
    double another_correct_result = a / (double)b; // We can also cast b to double, which will also give us 3.3333

    printf("Wrong floating-point division: %d / %d = %.2f\n", a, b, wrong_result);
    printf("Correct floating-point division: %d / %d = %.2f\n", a, b, correct_result);
    printf("Another correct floating-point division: %d / %d = %.2f\n", a, b, another_correct_result);

    // The modulus operator gives the remainder of the division, so 10 % 3 will give 1, because when you divide 10 by 3, you get 3 with a remainder of 1
    printf("Modulus: %d %% %d = %d\n", a, b, a % b);

    // Incrementing and decrementing can be done with the ++ and -- operators, which can be used in prefix or postfix form. In prefix form (++a), the variable is incremented before its value is used, while in postfix form (a++), the variable is incremented after its value is used.
    int c = 5;
    printf("Original value of c: %d\n", c);
    printf("Postfix increment (c++): %d\n", c++); // This will print 5, then increment c to 6
    printf("Value of c after postfix increment: %d\n", c); // This will print 6
    printf("Prefix increment (++c): %d\n", ++c); // This will increment c to 7, then print 7
    printf("Value of c after prefix increment: %d\n", c); // This will print 7
    printf("Postfix decrement (c--): %d\n", c--); // This will print 7, then decrement c to 6
    printf("Value of c after postfix decrement: %d\n", c); // This will print 6
    printf("Prefix decrement (--c): %d\n", --c); // This will decrement c to 5, then print 5
    printf("Value of c after prefix decrement: %d\n", c); // This will print 5

    return 0;
}