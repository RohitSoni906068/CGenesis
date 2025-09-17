/*
7. Hollow Rectangle Pattern
Program to print a hollow rectangle pattern using asterisks.
Example : rows = 4, columns = 5
Expected Output:
* * * * * *
* _ _ _ _ *
* _ _ _ _ *
* * * * * *
*/
#include <stdio.h>

int main()
{
    int rows, columns;

    printf("Enter the number of rows : ");
    scanf("%d", &rows);

    printf("Enter the number of columns : ");
    scanf("%d", &columns);

    printf("Hollow Rectangle(%d x %d) Pattern with Asterisks -:\n", rows, columns);
    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= columns; j++)
        {
            (i == 1 || j == 1 || i == rows || j == columns) ? printf("* ") : printf("  ");
        }

        printf("\n");
    }

    return 0;
}