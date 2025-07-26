// Write a program to print sum of factorial of 1 to n numbers.
#include <stdio.h>
int factorial(int n)
{
    if (n == 0 || n == 1)
        return 1;
    return n * factorial(n - 1); // direct call to itself
}

int factorial_sum(int n)
{
    if (n == 0)
        return 0;
    return factorial(n) + factorial_sum(n - 1); // again, calls itself
}
int main()
{
    int n;
    printf(" Enter Number : ");
    scanf(" %d", &n);
    printf(" Sum of factorials from 1 to %d is : %d\n", n, factorial_sum(n));
    return 0;
}