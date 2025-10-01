// Program to reverse a subarray between given start and end indices.
#include <stdio.h>

void reverseSubarray(int array[], int start_index, int end_index)
{
    while (start_index < end_index)
    {
        int temp = array[start_index];
        array[start_index] = array[end_index];
        array[end_index] = temp;

        start_index++;
        end_index--;
    }

    return;
}

int main()
{
    int array_size, start_index, end_index;

    printf("Enter the size of the array : ");
    scanf("%d", &array_size);

    int array[array_size];
    printf("Enter all %d elements of array -:\n", array_size);

    for (int i = 0; i < array_size; i++)
    {
        scanf("%d", &array[i]);
    }

    printf("Enter the start index for reversal : ");
    scanf("%d", &start_index);

    printf("Enter the end index for reversal : ");
    scanf("%d", &end_index);

    reverseSubarray(array, start_index, end_index); // Call the reverseSubarray function

    printf("After reversing subarray -:\n");
    for (int i = 0; i < array_size; i++)
    {
        printf("%d ", array[i]);
    }

    printf("\n");
    return 0;
}
