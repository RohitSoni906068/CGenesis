// Program to print a Square Number Pattern of asterisks
// 1 2 3 4
// 1 2 3 4
// 1 2 3 4

#include <stdio.h>
int main()
{
    int dimension;
    printf(" Enter the number of rows and columns : ");
    scanf(" %d", &dimension);

    for (int i = 1; i <= dimension; i++)
    {
        for (int j = 1; j <= dimension; j++)
        {
            printf("%d ", j);
        }
        printf("\n");
    }

    return 0;
}