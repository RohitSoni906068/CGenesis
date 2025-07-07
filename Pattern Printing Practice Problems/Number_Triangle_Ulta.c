// Program to print a left-aligned inverted triangle pattern of Number.
// 1 2 3 4
// 1 2 3
// 1 2
// 1
#include <stdio.h>
int main()
{
    int row;
    printf(" Enter number of row : ");
    scanf(" %d", &row);
    for (int i = row; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%d ", j);
        }
        printf("\n");
    }
    return 0;
}