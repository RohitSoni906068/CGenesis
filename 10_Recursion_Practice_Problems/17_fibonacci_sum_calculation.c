// Program to calculate the sum of Fibonacci numbers from 0 to n.
#include <stdio.h>

// Function to compute nth Fibonacci number recursively
int fibonacci(int n)
{
    return (n == 0 || n == 1) ? n : fibonacci(n - 1) + fibonacci(n - 2);
}

// Recursive function to compute sum of Fibonacci numbers from 0 to n
int sum_of_fibonacci(int n)
{
    return (n < 0) ? 0 : fibonacci(n) + sum_of_fibonacci(n - 1);
}

int main()
{
    int maxNumber;

    printf("Enter maximum natural number to end at : ");
    scanf("%d", &maxNumber);
    
    // Handle invalid ranges/Edge cases
    if (maxNumber < 1)
    {
        printf("Please enter a positive integer.\n");
        return 0;
    }

    int sum_of_fibonacci = sum_of_fibonacci(maxNumber);
    printf("Sum of the first %d terms of the Fibonacci sequence : %d\n", maxNumber, sum_of_fibonacci);

    return 0;
}