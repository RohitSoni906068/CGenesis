// Program to print a right-aligned triangle pattern of asterisks
// _ _ _ *
// _ _ * *
// _ * * *
// * * * *
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
        for (int star = 1; star <= line; star++)
        {
            printf("* ");
        }
        numSpaces--;
        printf("\n");
    }
    return 0;
}