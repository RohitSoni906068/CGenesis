// Recursive function to calculate the sum of numbers from 'start' to 'end' (parameterized version).
#include <stdio.h>

int sum(int start, int end, int Current_sum)
{
    return (start > end) ? Current_sum : sum(start + 1, end, Current_sum += start);
}

int main()
{
    int start, end;

    printf("Enter starting number to sum from : ");
    scanf("%d", &start);

    printf("Enter end number to sum to : ");
    scanf("%d", &end);

    int Parameterised_sum = sum(start, end, 0);
    printf("The Sum from %d to %d is : %d\n", start, end, Parameterised_sum);
    
    return 0;
}