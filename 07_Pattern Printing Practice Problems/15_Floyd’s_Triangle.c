// Program to print a left-aligned floyd's triangle pattern of numbers.
// 1
// 2 3
// 4 5 6
// 7 8 9 10
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
            printf("%d ", a++);
        }
        printf("\n");
    }

    return 0;
}