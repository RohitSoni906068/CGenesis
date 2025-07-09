#include <stdio.h>
/*

What is a void Function?
A void function does not return any value.
It is typically used to perform an action like printing, updating values, displaying output, etc.

Syntax-:
void function_name(parameter_list) {
    // code
}

Example......... */

void printMessage()
{
    printf(" Hello, Rohit! Welcome to C programming.\n");
}

int main() //execution always started with main
{
    printMessage(); // Function call
// Return type is void → no return value. So, You cannot assign the result of a void function to a variable.
    return 0;
}