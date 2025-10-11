// Write a program to print 4*4 square pattern as given below -:
// * * * *
// * * * *
// * * * *
// * * * *
#include <stdio.h>
int main()
{
    for (int i = 1; i <= 4; i++) // Outer loop : 4 iterations leading to 4 rows
    {
        for (int j = 1; j <= 4; j++) // Inner loop : 4 iterations each time leading to 4 (*) in each row
        {
            printf("* ");
        }
        printf("\n");
    }
    
    return 0;
}