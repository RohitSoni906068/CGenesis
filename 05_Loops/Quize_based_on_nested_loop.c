// Write a program to print 4*4 square pattern as given below -:
// * * * *
// * * * *
// * * * *
// * * * *
#include <stdio.h>
int main()
{
    for (int i = 1; i <= 4; i++)
    {
        for (int j = 1; j <= 4; j++)
        {
            printf(" *");
        }
        printf("\n");
    }
    return 0;
}