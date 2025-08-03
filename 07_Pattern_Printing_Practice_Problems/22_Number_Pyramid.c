// Program to print a centered numerical pyramid pattern
// - - - 1
// - - 1 2 3
// - 1 2 3 4 5
// 1 2 3 4 5 6 7
#include <stdio.h>
int main()
{
    int totalRows, leadingSpaces, numberCount;
    printf(" Enter the number of rows : ");
    scanf(" %d", &totalRows);

    leadingSpaces = totalRows - 1;
    numberCount = 1;

    for (int line = 1; line <= totalRows; line++)
    {
        int currentNumber = 1;

        // Print leading spaces
        for (int space = 1; space <= leadingSpaces; space++)
        {
            printf("  ");
        }

        // Print numbers
        for (int count = 1; count <= numberCount; count++)
        {
            printf("%d ", currentNumber);
            currentNumber++;
        }

        leadingSpaces--;
        numberCount += 2;

        printf("\n");
    }

    return 0;
}