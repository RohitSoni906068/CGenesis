// Program to print the following pattern:
// * * * * * * *
// * * * _ * * *
// * * _ _ _ * *
// * _ _ _ _ _ *

#include <stdio.h>
int main()
{
    int rows;
    printf(" Enter the number of rows : ");
    scanf(" %d", &rows);

    int numStars = rows - 1;
    int numSpaces = 1;

    // Print the first row
    for (int i = 1; i <= (2 * rows) - 1; i++)
    {
        printf("* ");
    }
    printf("\n");

    // Print the remaining rows
    for (int i = 1; i <= rows - 1; i++)
    {
        // Left stars
        for (int j = 1; j <= numStars; j++)
        {
            printf("* ");
        }

        // Middle spaces
        for (int j = 1; j <= numSpaces; j++)
        {
            printf("  ");
        }

        // Right stars
        for (int j = 1; j <= numStars; j++)
        {
            printf("* ");
        }

        printf("\n");

        numStars--;
        numSpaces += 2;
    }

    return 0;
}