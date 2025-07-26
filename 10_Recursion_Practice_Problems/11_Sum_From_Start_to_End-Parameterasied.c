// Function to recursively calculate the sum from 'start' to 'end'
#include <stdio.h>
int sum(int start, int end, int Current_sum)
{
    if (start == end)
    {
        return Current_sum += start;
    }
    return sum(start + 1, end, Current_sum += start);
}
int main()
{
    int start, end;

    printf(" Enter Start Number : ");
    scanf(" %d", &start);

    printf(" Enter End Number : ");
    scanf(" %d", &end);

    printf(" The Sum from %d to %d is : %d\n", start, end, sum(start, end, 0));
    return 0;
}