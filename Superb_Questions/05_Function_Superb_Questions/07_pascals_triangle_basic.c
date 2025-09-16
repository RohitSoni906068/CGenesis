// Program to print Pascal's Triangle up to a given number of rows.
// Example: If number of rows = 5
// 1
// 1 1
// 1 2 1
// 1 3 3 1
// 1 4 6 4 1
// 1 5 10 10 5 1
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

// Function to compute combinations of a given number
int combination(int x, int y)
{
    int nCr = factorial(x) / (factorial(y) * factorial(x - y));

    return nCr;
}

int main()
{
    int n;
    printf("Enter the number of rows for Pascal's Triangle : ");
    scanf("%d", &n);

    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            printf("%d ", combination(i, j));
        }

        printf("\n");
    }
    
    return 0;
}