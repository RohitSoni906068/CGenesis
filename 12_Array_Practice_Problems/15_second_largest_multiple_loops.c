// Program to find the second largest element in an array using various loop structures.
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
        if (array[i] > max) max = array[i];
    }

    secondMax = INT_MIN; // Proper initialization

    for (int j = 0; j < arraySize; j++)
    {
        // Update secondMax if a greater element is found
        if (array[j] != max && array[j] > secondMax) secondMax = array[j];
    }

    printf("Second maximum element in the given array is : %d\n", secondMax);
    return 0;
}
