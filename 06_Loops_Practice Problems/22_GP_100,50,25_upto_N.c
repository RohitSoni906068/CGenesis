// Display this GP - 100,50,25,.. upto ‘n’ terms.
#include <stdio.h>
int main()
{
    float n;
    printf(" Enter how many terms of the pattern to print : ");
    scanf(" %f", &n);
    float starting_number = 100;
    for (float i = 1; i <= n; i++)
    {
        printf(" %.3f", starting_number);
        starting_number /= 2;
    }
    printf("\n");
    return 0;
}