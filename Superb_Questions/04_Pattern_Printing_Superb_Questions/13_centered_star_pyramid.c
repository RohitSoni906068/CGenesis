/*
13. Centered Star Pyramid Pattern
Program to print a centered pyramid pattern using asterisks.
Example : rows = 4
Expected Output:
_ _ _ *
_ _ * * *
_ * * * * *
* * * * * * *
*/
#include <stdio.h>

int main()
{
    int rows;
    printf("Enter the number of rows : ");
    scanf("%d", &rows);

    int spaces = rows - 1; // Print leading spaces
    int stars = 1;         // Print stars

    printf("Centered Star Pyramid(%d rows) Pattern (Asterisks) -:\n", rows);
    for (int i = 1; i <= rows; i++)
    {
        // Print leading spaces
        for (int j = 1; j <= spaces; j++)
        {
            printf("  ");
        }

        // Print stars with a space
        for (int k = 1; k <= stars; k++)
        {
            printf("* ");
        }

        // Prepare for next row
        spaces--;
        stars += 2;
        printf("\n");
    }

    return 0;
}