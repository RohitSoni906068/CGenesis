/*
27. Hollow Inverted Triangle Pattern
Program to print the following hollow inverted triangle pattern:
Example : rows = 4
Expected Output:
* * * * * * *
* * * _ * * *
* * _ _ _ * *
* _ _ _ _ _ *
*/

#include <stdio.h>

int main()
{
    int rows;
    printf("Enter the number of rows : ");
    scanf("%d", &rows);

    int totalRows = (2 * rows) - 1;
    int numStars = rows - 1;
    int numSpaces = 1;

    printf("Hollow Inverted Triangle(%d rows) Pattern (Asterisks) -:\n", rows);

    // Print the first row
    for (int i = 1; i <= totalRows; i++)
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

        // Prepare for next row
        printf("\n");
        numStars--;
        numSpaces += 2;
    }

    return 0;
}