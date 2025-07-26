#include <stdio.h>
/*

What Is a Non-Void Function?
A non-void function returns a value of a specific data type like int, float, char, etc.
You use it when you want a result back from the function.

Syntax-:
return_type function_name(parameter_list) {
    // code
    return value;
}

*/

float average(float a, float b)
{
    return (a + b) / 2;
}

int main() //execution always started with main
{
    float avg = average(10.5, 7.5);
    printf("Average = %.2f\n", avg);
    return 0;
}