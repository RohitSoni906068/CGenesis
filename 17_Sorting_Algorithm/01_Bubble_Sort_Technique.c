#include <stdio.h>

int main()
{
    int size;

    printf("Enter size of the array : ");
    scanf("%d", &size);

    int arr[size];
    printf("Enter %d elements of the array -:\n", size);

    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    // Bubble Sort Technique
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    printf("Sorted array -:\n");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }

    printf("\n");
    return 0;
}