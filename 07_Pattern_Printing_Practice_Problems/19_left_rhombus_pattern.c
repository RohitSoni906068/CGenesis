/* 
19. Left-Aligned Rhombus Pattern
Program to print a left-aligned rhombus pattern using asterisks.
Example : rows = 4
Expected Output:
_ _ _ * * * *
_ _ * * * *
_ * * * *
* * * *
*/
#include <stdio.h>

int main()
{
    int rows;
    printf("Enter the number of rows : ");
    scanf("%d", &rows);

    int spaces = rows - 1; // Print leading spaces

    printf("Left-Aligned Rhombus(%d rows) Pattern (Asterisks) -:\n", rows);
    for (int i = 1; i <= rows; i++)
    {
        // Print leading spaces
        for (int j = 1; j <= spaces; j++)
        {
            printf("  ");
        }

        // Print stars with a space
        for (int k = 1; k <= rows; k++)
        {
            printf("* ");
        }

        // Prepare for next row
        printf("\n");
        spaces--;
    }

    return 0;
}