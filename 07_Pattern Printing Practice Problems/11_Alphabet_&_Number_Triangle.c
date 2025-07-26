// Program to print a Alternating Numeric-Alphabetic Triangle Pattern
// 1
// A B
// 1 2 3
// A B C D
// 1 2 3 4 5
#include <stdio.h>
int main()
{
    int totalRows;
    printf(" Enter the number of rows : ");
    scanf(" %d", &totalRows);

    for (int i = 1; i <= totalRows; i++)
    {
        int number = 1;
        char letter = 'A';

        for (int j = 1; j <= i; j++)
        {
            if (i % 2 == 0)
            {
                printf("%c ", letter++); // Post Increment -> After Printing letter Get +1
            }
            else
            {
                printf("%d ", number++); // Post Increment -> After Printing Number Get +1
            }
        }

        printf("\n");
    }

    return 0;
}