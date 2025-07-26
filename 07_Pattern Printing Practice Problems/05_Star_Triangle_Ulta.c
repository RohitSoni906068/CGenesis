// Program to print a left-aligned inverted triangle pattern of asterisks
// * * * *
// * * *
// * *
// *
#include <stdio.h>
int main()
{
    int row;
    printf(" Enter Row : ");
    scanf(" %d", &row);

    for (int i = row; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    
    return 0;
}