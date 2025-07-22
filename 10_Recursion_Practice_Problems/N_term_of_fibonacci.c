// Recursive function to calculate the nth Fibonacci number
#include <stdio.h>

int fibonacci_sequence(int n)
{
    if (n == 0 || n == 1)
    {
        return n;
    }
    return fibonacci_sequence(n - 1) + fibonacci_sequence(n - 2);
}

int main()
{
    int n_terms;

    printf(" Enter which term of Fibonacci series you want to print : ");
    scanf("%d", &n_terms);

    printf(" %d term of Fibonacci series is : %d\n", n_terms, fibonacci_sequence(n_terms));
    return 0;
}