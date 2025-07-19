// Program to print Pascal's Triangle up to a given number of rows.
// Example-> if number of rows = 5.
// 1
// 1 1
// 1 2 1
// 1 3 3 1
// 1 4 6 4 1
// 1 5 10 10 5 1
#include <stdio.h>
int factorial(int x)
{
    int fact = 1;
    for (int i = 1; i <= x; i++)
    {
        fact *= i;
    }
    return fact;
}
int combination(int x, int y)
{
    int nCr = factorial(x) / (factorial(y) * factorial(x - y));
    return nCr;
}
int main()
{
    int n;
    printf(" Enter the number of rows for Pascal's Triangle : ");
    scanf(" %d", &n);
    for (int row = 0; row <= n; row++)
    {
        for (int col = 0; col <= row; col++)
        {
            printf("%d ", combination(row, col));
        }
        printf("\n");
    }
    return 0;
}