// Prints numbers from startNum down to stopNum using recursion
#include <stdio.h>

void printDescending(int startNum, int stopNum)
{
    if (startNum < stopNum)
    {
        return;
    }
    printf("%d ", startNum);
    printDescending(startNum - 1, stopNum);
}

int main()
{
    int startNum, stopNum;

    printf(" Enter the starting number : ");
    scanf(" %d", &startNum);

    printf(" Enter the stopping number : ");
    scanf(" %d", &stopNum);

    printDescending(startNum, stopNum);
    printf("\n");

    return 0;
}