// Program to print an 'X' pattern of stars based on the number of rows.
// The number of rows must be an odd number provided by the user.
// * _ _ _ *
// _ * _ * _
// _ _ * _ _
// _ * _ * _
// * _ _ _ *
#include <stdio.h>
int main()
{
    int rows;
    printf(" Enter an odd number of rows : ");
    scanf(" %d", &rows);

    // Validate that the number of rows is odd
    if (rows % 2 == 0)
    {
        printf(" Error : Number of rows must be odd.\n");
        return 1;
    }

    for (int row = 1; row <= rows; row++)
    {
        for (int col = 1; col <= rows; col++)
        {
            if (row == col || row + col == rows + 1)
                printf("* ");
            else
                printf("  ");
        }
        printf("\n");
    }

    return 0;
}