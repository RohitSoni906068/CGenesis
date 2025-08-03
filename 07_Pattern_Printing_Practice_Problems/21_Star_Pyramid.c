// Program to print a centered star pyramid pattern
// _ _ _ *
// _ _ * * *
// _ * * * * *
// * * * * * * *
#include <stdio.h>
int main()
{
    int numRows, numSpaces, numStars;
    printf(" Enter the number of rows : ");
    scanf(" %d", &numRows);

    numSpaces = numRows - 1;
    numStars = 1;

    for (int line = 1; line <= numRows; line++)
    {

        for (int space = 1; space <= numSpaces; space++)
        {
            printf("  ");
        }

        for (int star = 1; star <= numStars; star++)
        {
            printf("* ");
        }

        numSpaces--;
        numStars += 2;

        printf("\n");
    }
    return 0;
}