// Program to print a left-aligned triangle Number pattern of asterisks
// 1
// 1 2
// 1 2 3
// 1 2 3 4

#include <stdio.h>
int main()
{
    int no_of_row;
    printf(" Enter Number Of Row : ");
    scanf(" %d", &no_of_row);

    for (int i = 1; i <= no_of_row; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%d ", j);
        }
        printf("\n");
    }

    return 0;
}