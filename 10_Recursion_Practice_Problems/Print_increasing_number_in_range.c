// Recursively prints numbers from 'from' to 'to' in increasing order.
#include <stdio.h>

void printRangeIncreasing(int from, int to)
{
    if (from > to)
    {
        return;
    }

    printf("%d ", from);
    printRangeIncreasing(from + 1, to);
}

int main()
{
    int from, to;

    printf(" Enter the starting number : ");
    scanf(" %d", &from);

    printf(" Enter the ending number : ");
    scanf(" %d", &to);

    printRangeIncreasing(from, to);
    printf("\n");

    return 0;
}