// Program to calculate the sum of numbers within a given range using a while loop.
#include <stdio.h>

int main()
{
    int start, end, sum = 0;

    printf("Enter the starting number : ");
    scanf("%d", &start);

    printf("Enter the ending number : ");
    scanf("%d", &end);

    int temp = start;
    while (end >= start)
    {
        sum += start;
        start++;
    }

    printf("The sum from %d to %d is : %d.\n", temp, end, sum);
    return 0;
}