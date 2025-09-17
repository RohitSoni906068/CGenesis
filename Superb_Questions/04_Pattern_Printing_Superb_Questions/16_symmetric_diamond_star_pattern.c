/*
16. Symmetric Diamond Star Pattern
Program to print a symmetric diamond pattern using asterisks.
Example : rows = 4
Expected Output:
_ _ _ *
_ _ * * *
_ * * * * *
* * * * * * *
_ * * * * *
_ _ * * *
_ _ _ *
*/
#include <stdio.h>

int main()
{
    int rows;
    printf("Enter the number of rows : ");
    scanf(" %d", &rows);

    int totalRows = (2 * rows)-1; // Total number of rows in the diamond
    int spaceCount = rows - 1; // Number of spaces in the first row
    int starCount = 1; // Number of stars in the first row

    printf("Symmetric Diamond Star Pattern(%d rows) Pattern (Asterisks) -:\n", rows);
    for (int i = 1; i <= totalRows; i++)
    {
        // Print leading spaces
        for (int j = 1; j <= spaceCount; j++)
        {
            printf("  ");
        }

        // Print stars
        for (int k = 1; k <= starCount; k++)
        {
            printf("* ");
        }

        // Adjust space and star counts for next row
        if (i < rows)
        {
            spaceCount--;
            starCount += 2;
        }
        else
        {
            spaceCount++;
            starCount -= 2;
        }
        printf("\n");

    }

    return 0;
}