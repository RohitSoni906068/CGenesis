// Program to print a rectangle pattern of asterisks
// * * * * *
// * * * * *
// * * * * *

#include <stdio.h>
int main()
{
    int rows, columns;
    printf(" Enter the number of rows : ");
    scanf("%d", &rows);
    printf(" Enter the number of columns in each row : ");
    scanf(" %d", &columns);

    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= columns; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}