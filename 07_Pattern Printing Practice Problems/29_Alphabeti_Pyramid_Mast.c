// print the given pattern
// A B C D E F G
// A B C _ E F G
// A B _ _ _ F G
// A _ _ _ _ _ G
#include <stdio.h>
int main()
{
    int rows;
    printf(" Enter the number of rows : ");
    scanf(" %d", &rows);

    int visibleCharsPerSide = rows - 1;
    int hiddenSpaces = 1;

    char currentChar = 'A';

    // Print the first row (all characters)
    for (int i = 1; i <= (2 * rows) - 1; i++)
    {
        printf("%c ", currentChar++);
    }
    printf("\n");

    // Print remaining rows
    for (int i = 1; i <= rows - 1; i++)
    {
        currentChar = 'A';

        // Left characters
        for (int j = 1; j <= visibleCharsPerSide; j++)
        {
            printf("%c ", currentChar++);
        }

        // Spaces in middle
        for (int j = 1; j <= hiddenSpaces; j++)
        {
            printf("  ");
            currentChar++;
        }

        // Right characters
        for (int j = 1; j <= visibleCharsPerSide; j++)
        {
            printf("%c ", currentChar++);
        }

        printf("\n");
        visibleCharsPerSide--;
        hiddenSpaces += 2;
    }

    return 0;
}