// Write a program to print number from 1 to 10 using for loop and 10 to 20 using while loop.
#include <stdio.h>
int main()
{
    int i;
    for (i = 1; i <= 10; i++)
    {
        printf(" %d", i);
    }
    while (i <= 20)
    {
        printf(" %d", i);
        i++;
    }
    printf("\n");
    return 0;
}