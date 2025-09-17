/*
15. Centered Alphabetical Palindrome Pyramid
Program to print a centered palindromic pyramid pattern using alphabets.
Example : rows = 4
Expected Output:
_ _ _ A
_ _ A B A
_ A B C B A
A B C D C B A
*/
#include <stdio.h>

int main()
{
    int rows;
    printf("Enter the number of rows : ");
    scanf("%d", &rows);

    int spaces = rows - 1; // Print leading spaces
    char maxChar = 'A'; // Print characters

    printf("Centered Alphabetical Palindrome Pyramid(%d rows) Pattern (Alphabets) -:\n", rows);
    for (int i = 1; i <= rows; i++)
    {
        // Print leading spaces for alignment
        for (int j = 1; j <= spaces; j++)
        {
            printf("  ");
        }

        // Print ascending characters
        for (char k = 'A'; k <= maxChar; k++)
        {
            printf("%c ", k);
        }

        // Print descending characters
        for (char l = maxChar - 1; l >= 'A'; l--)
        {
            printf("%c ", l);
        }

        // Prepare for next row
        spaces--;
        maxChar++;
        printf("\n");
    }

    return 0;
}