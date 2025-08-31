/*
18. Right-Aligned Triangle Pattern (Asterisks)
Program to print a right-aligned triangle pattern using asterisks.
Example : rows = 4
Expected Output:
_ _ _ *
_ _ * *
_ * * *
* * * *
*/
#include <stdio.h>

int main()
{
    int rows;
    printf("Enter the number of rows : ");
    scanf("%d", &rows);

    int spaces = rows - 1; // Print leading spaces

    printf("Right-Aligned Triangle(%d rows) Pattern (Asterisks) -:\n", rows);
    for (int i = 1; i <= rows; i++)
    {
        // Print leading spaces
        for (int j = 1; j <= spaces; j++)
        {
            printf("  ");
        }

        // Print stars with a space
        for (int k = 1; k <= i; k++)
        {
            printf("* ");
        }

        // Prepare for next row
        spaces--;
        printf("\n");
    }

    return 0;
}