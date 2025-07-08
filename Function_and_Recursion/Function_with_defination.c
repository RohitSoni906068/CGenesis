#include <stdio.h>
/*
What is a Function (with Definition)
A function is a self-contained block of code designed to perform a specific task.
You can define a function once and call it multiple times from different parts of your program.


Note-: A function must be declared before it is called, unless its definition appears before the call
*/

// Function definition
void greet() // Function defined before main
{
    printf("Hello, Rohit!\n");
}

// Function definition
int add(int a, int b) // Function defined before main
{
    return a + b; // returns the sum
}

int main()
{
    greet(); // Valid because of the earlier declaration
// Return type is void → no return value. So, You cannot assign the result of a void function to a variable.

    int result = add(10, 5); // Function call is valid
    printf("Sum = %d\n", result);
    return 0;
}
