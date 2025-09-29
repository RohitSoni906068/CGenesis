/* 
23. Centered Alphabet Pyramid Pattern
Program to print a centered pyramid pattern using consecutive alphabets.
Example : rows = 4
Expected Output:
_ _ _ A
_ _ A B C
_ A B C D E
A B C D E F G
*/
#include <stdio.h>

int main()
{
    int rows;
    printf("Enter the number of rows : ");
    scanf("%d", &rows);

    int spaces = rows - 1; // Print leading spaces
    int characterCount = 1; // Print characters

    printf("Centered Alphabet Pyramid(%d rows) Pattern (Alphabets) -:\n", rows);
    for (int i = 1; i <= rows; i++)
    {
        char currentCharacter = 'A';

        // Print leading spaces
        for (int j = 1; j <= spaces; j++)
        {
            printf("  ");
        }

        // Print characters
        for (int k = 1; k <= characterCount; k++)
        {
            printf("%c ", currentCharacter);
            currentCharacter++;
        }

        // Prepare for next row
        spaces--;
        characterCount += 2;
        printf("\n");
    }

    return 0;
}