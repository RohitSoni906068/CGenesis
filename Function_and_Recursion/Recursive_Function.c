#include <stdio.h>
/*
What is Recursion?
A recursive function is a function that calls itself directly or indirectly in order to solve a problem.

Basic Structure of a Recursive Function -:
return_type function_name(parameters) {
    if (base_condition) {
        return some_value;  // Stop recursion
    } else {
        return function_name(modified_parameters);  // Recursive call
    }
}
Base Case
Condition where recursion stops (prevents infinite calls)

Recursive Case
Function calls itself with a simpler or smaller problem

Termination
All recursive calls eventually reach the base case

*/
int factorial(int n)
{
    if (n == 0 || n == 1) // Base case
        return 1;
    else
        return n * factorial(n - 1); // Recursive case
}
/* What do factorial function

    •	factorial(5) → 5 * factorial(4)
    •	factorial(4) → 4 * factorial(3)
    •	…
    •	Until it hits the base case factorial(1), and then returns values step by step.

*/
int main()
{
    // Example : Factorial Using Recursion
    int result = factorial(5);
    printf("Factorial of 5 is : %d\n", result);
    return 0;
}