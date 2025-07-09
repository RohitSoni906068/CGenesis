// Program to print a Square Star Pattern of asterisks
// * * * *
// * * * *
// * * * *
// * * * *
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
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}