// Program to find the second largest element in an array using only one loop.
#include <stdio.h>
#include <limits.h>

int main()
{
    int secondMax, max = INT_MIN;
    int arraySize;

    printf("Enter the size of the array : ");
    scanf("%d", &arraySize);

    int array[arraySize];
    printf("Enter all %d elements of array -:\n", arraySize);

    for (int i = 0; i < arraySize; i++)
    {
        scanf("%d", &array[i]);

        // Update max if a greater element is found
        if (array[i] > max)
        {
            secondMax = max; // Update secondMax to current max
            max = array[i]; // Update max to current element
        }

        // Update secondMax if a greater element is found
        else if (array[i] != max && array[i] > secondMax) secondMax = array[i];
    }

    printf("Second maximum element in the given array is : %d\n", secondMax);
    return 0;
}
