#include <stdio.h>

int main()
{
    int size;
    printf("Enter the size of the array -:\n");
    scanf("%d", &size);

    int arr[size];
    printf("Enter %d elements of the array -:\n", size);

    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    // Selection Sort Algorithm
    for (int i = 0; i < size - 1; i++)
    {
        int minValue = arr[i];
        int minIndex = i;
        for (int j = i; j < size; j++)
        {
            if (arr[j] < minValue)
            {
                minValue = arr[j];
                minIndex = j;
            }
        }
        int temp = arr[i];
        arr[i] = arr[minIndex];
        arr[minIndex] = temp;
    }

    printf("Sorted array -:\n");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }

    printf("\n");
    return 0;
}
