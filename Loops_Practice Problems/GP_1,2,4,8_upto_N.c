// Display this GP - 1,2,4,8,16,32,.. upto ‘n’ terms.
#include <stdio.h>
int main()
{
    int n;
    printf(" Enter how many terms of the pattern to print : ");
    scanf(" %d", &n);
    int starting_number = 1;
    for (int i = 1; i <= n; i++)
    {
        printf(" %d", starting_number);
        starting_number *= 2;
    }
    printf("\n");
    return 0;
}