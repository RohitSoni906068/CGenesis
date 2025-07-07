// Program to print a star '+' pattern using asterisks.
// The number of rows must be an odd number provided by the user.
// _ _ * _ _
// _ _ * _ _
// * * * * *
// _ _ * _ _
// _ _ * _ _
#include <stdio.h>
int main()
{
    int totalRows;
    printf(" Enter an odd number for the number of rows : ");
    scanf(" %d", &totalRows);

    int midPoint = totalRows / 2 + 1;

    for (int line = 1; line <= totalRows; line++)
    {
        for (int column = 1; column <= totalRows; column++)
        {
            if (line == midPoint || column == midPoint)
            {
                printf("* ");
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }

    return 0;
}