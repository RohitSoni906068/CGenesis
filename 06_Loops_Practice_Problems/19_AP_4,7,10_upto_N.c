// Display this AP - 4,7,10,13,16.. upto ‘n’ terms.
#include <stdio.h>
int main()
{
    int n;
    printf(" Enter how many terms of the pattern to print : ");
    scanf(" %d", &n);
    int starting_number = 4;
    for (int i = 1; i <= n; i++)
    {
        printf(" %d", starting_number);
        starting_number += 3;
    }
    printf("\n");
    return 0;
}