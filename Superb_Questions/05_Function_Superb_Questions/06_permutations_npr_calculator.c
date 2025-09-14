// Program to compute permutations (nPr).
// Formula to compute permutations (nPr) : P(n, r) = n! / (n - r)!
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

    printf("Enter value for n : ");
    scanf("%d", &n);

    printf("Enter value for r : ");
    scanf("%d", &r);

    int nPr = factorial(n) / factorial(n - r);
    printf("The value of nPr(%d, %d) is : %d\n", n, r, nPr);

    return 0;
}