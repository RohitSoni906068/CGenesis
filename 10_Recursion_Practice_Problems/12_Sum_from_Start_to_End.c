// Function to recursively calculate the sum from 'start' to 'end'
#include <stdio.h>

int sum_range(int start, int end)
{
    if (start > end)
    {
        return 0; // base case for invalid or completed range
    }
    return start + sum_range(start + 1, end);
}

int main()
{
    int start, end;

    printf(" Enter the starting number : ");
    scanf(" %d", &start);

    printf(" Enter the ending number : ");
    scanf(" %d", &end);

    printf(" Sum from %d to %d is : %d\n", start, end, sum_range(start,end));

    return 0;
}