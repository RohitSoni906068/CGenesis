// Program to print Center-align Pascal's Triangle up to a given number of rows.
//   _ _ _ _ _ 1
//   _ _ _ _ 1 _ 1
//   _ _ _ 1 _ 2 _ 1
//   _ _ 1 _ 3 _ 3 _ 1
//   _ 1 _ 4 _ 6 _ 4 _ 1
//   1 _ 5 _ 10 _ 10 _ 5 _ 1
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
    int nsp = n - 1;
    for (int row = 0; row <= n; row++)
    {
        for (int space = 0; space <= nsp; space++)
        {
            printf("  ");
        }

        for (int col = 0; col <= row; col++)
        {
            printf("  ");
            printf("%d ", combination(row, col));
        }
        printf("\n");
        nsp--;
    }
    return 0;
}