// Program to print a left-aligned triangle pattern of odd numbers
// 1
// 1 3
// 1 3 5
// 1 3 5 7

#include <stdio.h>
int main()
{
    int no_of_row;
    printf(" Enter Number Of Row : ");
    scanf(" %d", &no_of_row);

    for (int i = 1; i <= no_of_row; i++)
    {
        int pattern = 1;
        for (int j = 1; j <= i; j++)
        {
            printf("%d ", pattern);
            pattern += 2;
        }
        printf("\n");
    }

    return 0;
}