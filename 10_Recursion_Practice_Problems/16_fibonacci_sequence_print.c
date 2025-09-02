// Print Fibonacci Sequence from 0 to n Using Recursion.
#include <stdio.h>

int fibonacci(int term) // Function to compute nth Fibonacci number recursively
{
    return (term == 0 || term == 1) ? term : fibonacci(term - 1) + fibonacci(term - 2);
}

void fibonacci_sequence(int x) // Function to print Fibonacci sequence from 0 to n recursively
{
    if (x < 0) return;
    
    fibonacci_sequence(x - 1);
    printf("%d ", fibonacci(x));

    return;
}

int main()
{
    int term;
    printf("Enter how many terms (0 based) of Fibonacci sequence to print : ");
    scanf("%d", &term);

    // Handle invalid ranges/Edge cases
    if (term < 0)
    {
        printf("Please enter a non-negative integer.\n");
        return 0;
    }

    printf("Fibonacci Sequence from 0 to %d -:\n", term);
    fibonacci_sequence(term - 1);

    printf("\n");
    return 0;
}