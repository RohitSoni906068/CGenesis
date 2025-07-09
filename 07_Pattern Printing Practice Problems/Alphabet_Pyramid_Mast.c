// Program to print a centered alphabetical pyramid pattern
// _ _ _ A
// _ _ A B A
// _ A B C B A
// A B C D C B A
#include <stdio.h>
int main()
{
    int rows;
    printf(" Enter the number of rows : ");
    scanf(" %d", &rows);

    int spaces = rows - 1;
    char current_max_char = 'A';

    for (int row = 1; row <= rows; row++)
    {
        // Print leading spaces for alignment
        for (int space = 1; space <= spaces; space++)
        {
            printf("  ");
        }

        // Print ascending characters
        for (char ch = 'A'; ch <= current_max_char; ch++)
        {
            printf("%c ", ch);
        }

        // Print descending characters
        for (char ch = current_max_char - 1; ch >= 'A'; ch--)
        {
            printf("%c ", ch);
        }

        // Prepare for next row
        spaces--;
        current_max_char++;

        printf("\n");
    }

    return 0;
}