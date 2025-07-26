// Program to print a centered numeric pyramid pattern
// _ _ _ 1
// _ _ 1 2 1
// _ 1 2 3 2 1
// 1 2 3 4 3 2 1
#include <stdio.h>
int main()
{
    int rows, spaces, maxNum;
    printf(" Enter the number of rows : ");
    scanf(" %d", &rows);

    spaces = rows - 1;
    maxNum = 1;

    for (int line = 1; line <= rows; line++)
    {
        // Print leading spaces
        for (int space = 1; space <= spaces; space++)
        {
            printf("  ");
        }

        // Print ascending numbers
        for (int num = 1; num <= maxNum; num++)
        {
            printf("%d ", num);
        }

        // Print descending numbers
        for (int descNum = maxNum - 1; descNum >= 1; descNum--)
        {
            printf("%d ", descNum);
        }

        spaces--;
        maxNum++;

        printf("\n");
    }

    return 0;
}