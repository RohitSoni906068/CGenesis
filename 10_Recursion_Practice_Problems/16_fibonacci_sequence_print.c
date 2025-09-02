// Print Fibonacci Sequence from 0 to n Using Recursion.
#include <stdio.h>

int fibonacci(int term)
{
    if (term == 0 || term == 1)
    {
        return term;
    }
    return fibonacci(term - 1) + fibonacci(term - 2);
}

void fibonacci_sequence(int x)
{
    if (x < 0)
    {
        return;
    }

    fibonacci_sequence(x - 1);
    printf("%d ", fibonacci(x));
}
int main()
{
    int term;
    printf(" Enter how many terms of Fibonacci sequence to print : ");
    scanf(" %d", &term);

    printf(" Fibonacci Sequence : ");
    fibonacci_sequence(term - 1);

    printf("\n");
    return 0;
}