// Program to find the missing number from an array containing numbers from 1 to 20
#include <stdio.h>

int main()
{
    // One number is missing from the range 1 to 20
    int numbers[19] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10,11, 12, 13, 14, 15, 16, 17, 19, 20};

    int expectedSize = 20;
    int actualSum = 0;

    // Calculate the sum of the array's elements
    for (int i = 0; i < expectedSize - 1; i++)
    {
        actualSum += numbers[i];
    }

    // Calculate the sum of numbers from 1 to 20
    int expectedSum = (expectedSize * (expectedSize + 1)) / 2;

    int missingNumber = expectedSum - actualSum;

    printf(" The missing number is : %d\n", missingNumber);

    return 0;
}
