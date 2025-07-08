#include <stdio.h>
/*  A function is a reusable block of code that performs a specific task.

Syntax of a Function-:
     return_type function_name(parameter1_type parameter1, parameter2_type parameter2, ...) {
      Body of the function
      Statements
     return value; -> Optional, only if return_type is not void
}

General Syntax of Function Call -:
    function_name(argument1, argument2, ...);
*/
void greetUser()
{
    printf("Welcome, Rohit!\n");
}

 int main() // The main() function is the entry point of program.
{
    greetUser(); // Function call with no arguments
    return 0;
}