// Recursive function to print numbers from 'start' to 'end' in increasing order.
#include <stdio.h>

void printRangeIncreasing(int from, int to)
{
    if (from > to) return;

    printf("%d ", from);
    printRangeIncreasing(from + 1, to);

    return;
}

int main()
{
    int from, to;

    printf("Enter the starting  number to start from : ");
    scanf("%d", &from);

    printf("Enter the ending number to end at : ");
    scanf("%d", &to);

    // Handle invalid ranges/Edge cases
    if (from > to)
    {
        printf("Please enter a valid range.\n");
        return 0;
    }
    
    printf("Increasing order from %d to %d : ", from, to);
    printRangeIncreasing(from, to);
    printf("\n");

    return 0;
}