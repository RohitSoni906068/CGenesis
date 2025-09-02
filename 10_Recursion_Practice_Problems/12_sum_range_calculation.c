// Recursive function to calculate the sum of numbers from 'start' to 'end'.
#include <stdio.h>

int sum_range(int start, int end)
{
    return (start > end) ? 0 : start + sum_range(start + 1, end);
}

int main()
{
    int start, end;

    printf("Enter the starting number to sum from : ");
    scanf("%d", &start);

    printf("Enter the ending number to sum to : ");
    scanf("%d", &end);

    // Handle invalid ranges/Edge cases
    if (start > end)
    {
        printf("Please enter a valid range.\n");
        return 0;
    }

    int sum = sum_range(start,end);
    printf("Sum from %d to %d is : %d\n", start, end, sum);

    return 0;
}