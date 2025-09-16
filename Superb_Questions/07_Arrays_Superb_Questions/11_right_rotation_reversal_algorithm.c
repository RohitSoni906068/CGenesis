// Program to perform a right rotation on an array using the reversal algorithm. 
// The program should read array elements from the user and rotate the array 'r' times.
#include <stdio.h>

void reverse_subarray(int array[], int start_index, int end_index)
{ 
    // Swapping Code
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
    int array_size;

    printf("Enter the size of the array : ");
    scanf("%d", &array_size);

    int array[array_size];

    for (int i = 0; i < array_size; i++)
    {
        printf("Enter value for element %d : ", i);
        scanf("%d", &array[i]);
    }

    int times;

    printf("Enter the number of times to rotate the array : ");
    scanf("%d", &times);

    printf("Array after rotating by %d position(s) -:\n", times);

    // Core/Logic Part Of Program or Reversal Algorithm
    times %= array_size;
    reverse_subarray(array, 0, array_size - 1);
    reverse_subarray(array, 0, times - 1);
    reverse_subarray(array, times, array_size - 1);

    // Output the rotated array
    for (int i = 0; i < array_size; i++)
    {
        printf("%d ", array[i]);
    }

    printf("\n");
    return 0;
}
