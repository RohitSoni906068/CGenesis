// Program to print a left-aligned floyd's triangle pattern of odd numbers.
// 1
// 3 5
// 7 9 11
// 13 15 17 19
#include <stdio.h>
int main()
{
    int row;
    printf(" Enter Row : ");
    scanf(" %d", &row);

    int a = 1;
    for (int i = 1; i <= row; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%d ", a);
            a += 2;
        }
        printf("\n");
    }

    return 0;
}