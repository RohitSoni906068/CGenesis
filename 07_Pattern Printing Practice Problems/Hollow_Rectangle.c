// Print the given hollow rectangle pattern
// * * * * * *
// * _ _ _ _ *
// * _ _ _ _ *
// * * * * * *
#include <stdio.h>
int main()
{
    int rows, columns;
    printf(" Enter the number of rows : ");
    scanf(" %d", &rows);
    printf(" Enter the number of columns : ");
    scanf(" %d", &columns);

    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= columns; j++)
        {
            if (i == 1 || j == 1 || i == rows || j == columns)
            {
                printf("* ");
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }

    return 0;
}