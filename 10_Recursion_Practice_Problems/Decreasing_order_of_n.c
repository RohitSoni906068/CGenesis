// Recursively prints numbers in decreasing order from x to 1
#include <stdio.h>

void printDecreasing(int x)
{
    if (x == 0)
    {
        return;
    }
    printf("%d ", x);
    printDecreasing(x - 1);
}

int main()
{
    int maxNumber;

    printf(" Enter your maximum number : ");
    scanf(" %d", &maxNumber);

    printDecreasing(maxNumber);

    printf("\n");
    return 0;
}