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

    // Bubble Sort with reduced number of operations
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - i - 1; j++) // (-i) because in each pass places the largest element at the end
        {                                      // so, don't need to check it.
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