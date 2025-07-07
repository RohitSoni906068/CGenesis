// Program to print a left-aligned triangle pattern of asterisks
// *
// * *
// * * *
// * * * *
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
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}