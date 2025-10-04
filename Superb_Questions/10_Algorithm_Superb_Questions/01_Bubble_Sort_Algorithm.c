#include <stdio.h>

int main()
{
    int size;
    printf("Enter the size of the array : ");
    scanf("%d", &size);

    int array[size];
    printf("Enter %d elements of the array -:\n", size);

    for (int i = 0; i < size; i++)
    {
        scanf("%d", &array[i]);
    }

    // Bubble Sort with early exit optimization
    for (int i = 0; i < size - 1; i++)
    {
        int isSorted = 1;

        for (int j = 0; j < size - 1 - i; j++)
        {
            if (array[j] > array[j + 1])
            {
                int temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
                isSorted = 0;
            }
        }

        if (isSorted) break;
    }

    printf("Sorted array -:\n");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", array[i]);
    }

    printf("\n");
    return 0;
}