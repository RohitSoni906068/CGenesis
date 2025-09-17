/*
1. Rectangle Pattern with Asterisks
Program to print a rectangle pattern using asterisks.
Example : rows = 3, columns = 4
Expected Output:
* * * * *
* * * * *
* * * * * 
*/
#include <stdio.h>

int main()
{
    int rows, columns;

    printf("Enter the number of rows : ");
    scanf("%d", &rows);

    printf("Enter the number of columns : ");
    scanf("%d", &columns);

    printf("Rectangle(%d x %d) Pattern with Asterisks -:\n", rows, columns);
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