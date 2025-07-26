// Program to print a left-aligned rhombus pattern of asterisks
// _ _ _ * * * *
// _ _ * * * *
// _ * * * *
// * * * *
#include <stdio.h>
int main()
{
    int rows;
    printf("Enter number of rows: ");
    scanf(" %d", &rows);
    int spaces = rows - 1; // Print leading spaces

    for (int line = 1; line <= rows; line++)
    {
        // Print leading spaces
        for (int space = 1; space <= spaces; space++)
        {
            printf("  ");
        }
        // Print stars with a space
        for (int start = 1; start <= rows; start++)
        {
            printf("* ");
        }
        printf("\n");
        spaces--;
    }
    return 0;
}