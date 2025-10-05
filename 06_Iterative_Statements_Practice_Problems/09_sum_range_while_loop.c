// Program to calculate the sum of numbers from R to S using a while loop.
#include <stdio.h>

int main()
{
    int r, s, sum = 0;

    printf("Enter the starting number : ");
    scanf("%d", &r);

    printf("Enter the ending number : ");
    scanf("%d", &s);

    int start = r;
    while (s >= r)
    {
        sum += r;
        r++;
    }

    printf("The sum from %d to %d is : %d.\n", start, s, sum);
    return 0;
}