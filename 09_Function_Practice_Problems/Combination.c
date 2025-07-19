// Program to compute combinations (nCr) using the formula:
// C(n, r) = n! / [r! * (n - r)!]
#include <stdio.h>
// Function to compute factorial of a given number
int factorial(int x)
{
    int fact = 1;
    for (int i = 1; i <= x; i++)
    {
        fact *= i;
    }
    return fact;
}
int main()
{
    int n, r;
    printf(" Enter value for n : ");
    scanf(" %d", &n);
    printf(" Enter value for r : ");
    scanf(" %d", &r);
    int nCr = factorial(n) / (factorial(r) * (factorial(n - r)));
    printf(" The value of C(%d, %d) is : %d\n", n, r, nCr);
    return 0;
}