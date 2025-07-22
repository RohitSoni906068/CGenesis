// Program to find the number of ways to climb 'n' stairs,
// where one can take either 1 or 2 steps at a time.
#include <stdio.h>

int Stair_Path(int stair)
{
    if (stair == 2 || stair == 1)
    {
        return stair;
    }
    return Stair_Path(stair - 1) + Stair_Path(stair - 2);
}

int main()
{
    int stair;

    printf(" Enter Number of Stair : ");
    scanf(" %d", &stair);

    printf(" Number of Ways to climb %d stair is : %d \n", stair, Stair_Path(stair));
    return 0;
}