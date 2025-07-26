// Program to print a symmetric diamond star pattern
// _ _ _ *
// _ _ * * *
// _ * * * * *
// * * * * * * *
// - * * * * *
// _ _ * * *
// _ _ _ *
#include <stdio.h>
int main()
{
    int totalRows;
    printf(" Enter number of rows : ");
    scanf(" %d", &totalRows);

    int spaceCount = totalRows - 1;
    int starCount = 1;

    for (int line = 1; line <= (2 * totalRows) - 1; line++)
    {
        // Print leading spaces
        for (int spaces = 1; spaces <= spaceCount; spaces++)
        {
            printf("  ");
        }

        // Print stars
        for (int star = 1; star <= starCount; star++)
        {
            printf("* ");
        }

        printf("\n");

        // Adjust space and star counts
        if (line < totalRows)
        {
            spaceCount--;
            starCount += 2;
        }
        else
        {
            spaceCount++;
            starCount -= 2;
        }
    }

    return 0;
}