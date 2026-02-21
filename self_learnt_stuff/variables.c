#include <stdio.h>


int main() {
    int age = 18; // Defined and assigned
    int another_age; // Only defined, trying to use this (without assigning) results in a compiling error
    // Both lines above could be simplified to 'int age = 18, new_age;' defining both as int's and assigning one
    printf("Age: %d\n", age);
    age = 19; // Assigning a new value to the same variable
    printf("New Age: %d\n", age);
    another_age = age + 4; // Assigning a value to another variable
    printf("Another age: %d\n", another_age);
    age -= 1; // Same as 'age = age - 1;', Incrementing and decrementing can also be done with 'age++' and 'age--'
    printf("Original age: %d\n", age);
    return 0;
}

/*
    Notes:
1. Can't have spaces between variable names, can't use certain expressions
   like 'if', 'return', etc., can't have names starting in numbers.
   
2. Should use snake_case or camelCase for naming variables
*/