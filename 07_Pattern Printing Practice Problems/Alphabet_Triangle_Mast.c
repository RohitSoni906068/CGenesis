// Program to print a right-aligned triangle pattern of alphabetics
// _ _ _ A
// _ _ A B
// _ A B C
// A B C D
#include <stdio.h>
int main()
{
    int numRows, numSpaces;
    printf(" Enter the number of rows : ");
    scanf(" %d", &numRows);
    numSpaces = numRows - 1;
    for (int line = 1; line <= numRows; line++)
    {
        for (int space = 1; space <= numSpaces; space++)
        {
            printf("  ");
        }
        char ch = 'A';
        for (int character = 1; character <= line; character++)
        {
            printf("%c ", ch++);
        }

        numSpaces--;
        printf("\n");
    }
    return 0;
}