/*
Program that print patterns:
 1. * _ _ _ _          2. * * * * *           3. _ _ _ _ *
    * * _ _ _             * * * * _              _ _ _ * *
    * * * _ _             * * * _ _              _ _ * * *
    * * * * _             * * _ _ _              _ * * * *
    * * * * *             * _ _ _ _              * * * * *
*/
#include <stdio.h>

int main()
{
    printf("Welcome to Printing Patterns.\n");
    int rows;

    printf("Enter the Number of Rows : ");
    scanf("%d", &rows);

    printf("\n");
    printf("Here is the, Right Half Pyramid Pattern :\n");
    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("* ");
        }

        printf("\n");
    }
    printf("\n");

    printf("Here is the, Reverse Right Half Pyramid Pattern :\n");
    for (int i = rows; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("* ");
        }

        printf("\n");
    }
    printf("\n");

    printf("Here is the, Left Half Pyramid Pattern :\n");
    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= rows - i; j++)
        {
            printf("  ");
        }

        for (int k = 1; k <= i; k++)
        {
            printf("* ");
        }

        printf("\n");
    }

    return 0;
}