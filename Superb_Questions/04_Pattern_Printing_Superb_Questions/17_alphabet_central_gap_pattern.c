/*
17. Alphabet Pattern with Central Gap
Write a program to print alphabets with a central gap pattern:
Example : rows = 4
Expected Output:
A B C D E F G
A B C _ E F G
A B _ _ _ F G
A _ _ _ _ _ G
*/
#include <stdio.h>

int main()
{
    int rows;
    printf("Enter the number of rows : ");
    scanf(" %d", &rows);

    int totalRows = (2 * rows) - 1;
    int visibleChars = rows - 1;
    int hiddenSpaces = 1;

    printf("Alphabet Pattern with Central Gap(%d rows) Pattern (Alphabets) -:\n", rows);
    
    // Print the first row (all characters)
    char currentChar = 'A';
    for (int i = 1; i <= totalRows; i++)
    {
        printf("%c ", currentChar++);
    }
    printf("\n");

    // Print remaining rows
    for (int i = 1; i <= rows - 1; i++)
    {
        currentChar = 'A';

        // Print characters on the left side
        for (int j = 1; j <= visibleChars; j++)
        {
            printf("%c ", currentChar++);
        }

        // Print hidden (blank) positions
        for (int j = 1; j <= hiddenSpaces; j++)
        {
            printf("  ");
            currentChar++;
        }

        // Print characters on the right side
        for (int j = 1; j <= visibleChars; j++)
        {
            printf("%c ", currentChar++);
        }

        // Prepare for next row
        visibleChars--;
        hiddenSpaces += 2;
        printf("\n");
    }

    return 0;
}