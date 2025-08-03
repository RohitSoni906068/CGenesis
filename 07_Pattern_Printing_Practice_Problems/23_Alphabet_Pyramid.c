// Program to print a centered alphbetics pyramid pattern
// _ _ _ A
// _ _ A B C
// _ A B C D E
// A B C D E f G
#include <stdio.h>
int main()
{
    int totalRows, leadingSpaces, characterCount;
    printf(" Enter the number of rows : ");
    scanf(" %d", &totalRows);

    leadingSpaces = totalRows - 1;
    characterCount = 1;

    for (int line = 1; line <= totalRows; line++)
    {
        char ch = 'A';

        // Print leading spaces
        for (int space = 1; space <= leadingSpaces; space++)
        {
            printf("  ");
        }

        // Print numbers
        for (int count = 1; count <= characterCount; count++)
        {
            printf("%c ", ch);
            ch++;
        }

        leadingSpaces--;
        characterCount += 2;

        printf("\n");
    }

    return 0;
}