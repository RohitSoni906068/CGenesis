// Program to print natural numbers from R (start) to S (end),
// excluding numbers in the range from i (skip start) to k (skip end).
#include <stdio.h>
int main()
{
    int printStart, printEnd, excludeStart, excludeEnd;
    printf(" Enter the start of the print range : ");
    scanf(" %d", &printStart);
    printf(" Enter the end of the print range : ");
    scanf(" %d", &printEnd);
    printf(" Enter the start of the exclusion range : ");
    scanf(" %d", &excludeStart);
    printf(" Enter the end of the exclusion range : ");
    scanf(" %d", &excludeEnd);
    for (int i = printStart; i <= printEnd; i++)
    {
        if (i >= excludeStart && i <= excludeEnd)
        {
            continue;
        }
        printf("%d ", i);
    }
    printf("\n");
    return 0;
}