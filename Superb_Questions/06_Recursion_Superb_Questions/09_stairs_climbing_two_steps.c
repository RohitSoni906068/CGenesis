// Program to find the number of ways to climb 'n' stairs, where one can take either 1 or 2 steps at a time.
#include <stdio.h>

int Stair_Path(int stairs)
{
    return (stairs == 1 || stairs == 2) ? stairs : Stair_Path(stairs - 1) + Stair_Path(stairs - 2);
}

int main()
{
    int stairs; 

    printf("Enter number of stairs : ");
    scanf("%d", &stairs);

    // Handle invalid ranges/Edge cases
    if (stairs < 0)
    {
        printf("Please enter a non-negative integer.\n");
        return 0;
    }

    int total_ways = Stair_Path(stairs);
    printf("Number of Ways to climb %d stairs is : %d \n", stairs, total_ways);

    return 0;
}