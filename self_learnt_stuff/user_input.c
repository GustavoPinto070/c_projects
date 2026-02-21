#include <stdio.h>


int main() {
    /*
    scanf is a function that allows us to read input from the user, it takes a format string as the first argument,
    which specifies the type of input we want to read, and a pointer to a variable where the input will be stored as the second argument.
    In this case, we want to read an integer, so we use %d in the format string, and we pass the address of the variable 'age' using the & operator,
    which means that scanf will store the input value in the variable 'age'.
    */
    int age;
    printf("Enter your age: ");
    scanf("%d", &age);
    printf("You are %d years old.\n", age);

    // For reading a double, we use %lf in the format string.
    double height;
    printf("Enter your height in meters (Use . as decimal separator): ");
    scanf("%lf", &height);
    printf("You are %.2f meters tall.\n", height);

    // For reading a char, we use %c in the format string.
    char first_letter;
    printf("Enter the first letter of your name: ");
    scanf(" %c", &first_letter);
    printf("Your first letter is: %c\n", first_letter);

    // For reading a string, we can use %s in the format string, but it will only read until the first whitespace character (space, tab, newline), so if we want to read a full name with spaces, we can use fgets instead of scanf.
    char cat_name[20]; // We can also declare an array of characters, which can hold a string (a sequence of characters), in this case, we can store a cat name with up to 19 characters (the last character is reserved for the null terminator '\0' that indicates the end of the string)
    printf("Enter your cat's first name: ");
    scanf("%s", cat_name); // This will read a string until the first whitespace character, so if the user enters "Mr. Whiskers", only "Mr." will be stored in cat_name
    printf("Your cat's name is: %s\n", cat_name);

    // For reading multiple integers into an array, we can use a loop to read each integer one by one.
    int favorite_numbers[5]; // We can also declare an array of integers, which can hold multiple values of the same type, in this case, we can store 5 integers in the array 'favorite_numbers'
    printf("Enter your 5 favorite numbers: ");
    for (int i = 0; i < 5; i++) {
        scanf("%d", &favorite_numbers[i]);
    }
    printf("Your favorite numbers are: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", favorite_numbers[i]);
    }
    printf("\n");
    
    // For reading multiple values of different types, we can use a single scanf statement with multiple format specifiers, but we need to make sure to provide the correct number of arguments and the correct types.
    int year;
    char month[10];
    printf("Enter a year and a month (e.g., 2024 June): ");
    scanf("%d %s", &year, month);
    printf("You entered: %d %s\n", year, month);

    return 0;
}
/*
Notes:
1. When using scanf, it's important to provide the correct format specifiers for the type of input we want to read,
   and to pass the address of the variable where the input will be stored using the & operator for non-array variables.
   For arrays, we can pass the array name without the & operator, as the array name already represents the address
   of the first element of the array.
   
2. When reading strings with scanf, it will stop reading at the first whitespace character,
   so if we want to read a full name with spaces, we should use fgets instead of scanf. 

3. When reading multiple values of different types with a single scanf statement, we need to make sure
   to provide the correct number of arguments and the correct types, otherwise it can lead to undefined behavior.
*/