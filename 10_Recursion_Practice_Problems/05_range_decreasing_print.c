// Recursive function to print numbers from startNum down to stopNum.
#include <stdio.h>

void printDescending(int maxNum, int minNum)
{

    if (maxNum < minNum) return;

    printf("%d ", maxNum);
    printDescending(maxNum - 1, minNum);

    return;
}

int main()
{
    int maxNum, minNum;

    printf("Enter the maximum number to start from : ");
    scanf("%d", &maxNum);

    printf("Enter the minimum number to end at : ");
    scanf("%d", &minNum);

    // Handle invalid ranges/Edge cases
    if (maxNum < minNum)
    {
        printf("Please enter a valid range.\n");
        return 0;
    }
    
    printf("Decreasing order from %d to %d : ", maxNum, minNum);
    printDescending(maxNum, minNum);

    printf("\n");
    return 0;
}