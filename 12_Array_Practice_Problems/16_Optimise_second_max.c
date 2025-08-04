// Find the second largest element in the given Array using only one loop
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
        scanf(" %d", &array[i]);

        if (array[i] > max)
        {
            secondMax = max;
            max = array[i];
        }
        else if (array[i] != max && array[i] > secondMax)
        {
            secondMax = array[i];
        }
    }

    printf(" Second maximum element in the given array is : %d\n", secondMax);
    return 0;
}