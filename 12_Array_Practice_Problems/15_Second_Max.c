// Find the second largest element in the given Array using various loops
#include <stdio.h>
#include <limits.h>

int main()
{
    int secondMax, max = INT_MIN;
    int arraySize;

    printf(" Enter the size of the array : ");
    scanf(" %d", &arraySize);

    int array[arraySize];

    for (int i = 0; i < arraySize; i++)
    {
        printf(" Enter value for element %d : ", i);
        scanf("%d", &array[i]);

        if (array[i] > max)
        {
            max = array[i];
        }
    }

    secondMax = INT_MIN; // Proper initialization

    for (int j = 0; j < arraySize; j++)
    {
        if (array[j] != max && array[j] > secondMax)
        {
            secondMax = array[j];
        }
    }

    printf(" Second maximum element in the given array is : %d\n", secondMax);
    return 0;
}