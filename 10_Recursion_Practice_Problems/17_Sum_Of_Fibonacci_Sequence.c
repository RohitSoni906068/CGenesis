// Write a program to print sum of fibonacci of 0 to n numbers.

#include <stdio.h>

// Function to compute nth Fibonacci number recursively
int fibonacci(int n)
{
    if (n == 0 || n == 1)
        return n;

    return fibonacci(n - 1) + fibonacci(n - 2);
}

// Recursive function to compute sum of Fibonacci numbers from 0 to n
int sum_of_fibonacci(int n)
{
    if (n < 0)
        return 0;

    return fibonacci(n) + sum_of_fibonacci(n - 1);
}

int main()
{
    int num_terms;

    printf(" Enter how many terms of the Fibonacci sequence to sum : ");
    scanf(" %d", &num_terms);

    printf(" Sum of the first %d terms of the Fibonacci sequence : %d\n", num_terms, sum_of_fibonacci(num_terms-1));

    return 0;
}