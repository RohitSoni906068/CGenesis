// Program to perform a right rotation on an array using the reversal algorithm.
// It reads array elements from the user and rotates the array 'r' times.
#include <stdio.h>
void reverse_subarray(int array[], int start_index, int end_index)
{
    while (start_index < end_index)
    {
        int temp = array[start_index];
        array[start_index] = array[end_index];
        array[end_index] = temp;
        start_index++;
        end_index--;
    }
}
int main()
{
    int array_size;

    printf(" Enter the size of the array : ");
    scanf(" %d", &array_size);

    int array[array_size];

    for (int i = 0; i < array_size; i++)
    {
        printf(" Enter value for element %d : ", i);
        scanf(" %d", &array[i]);
    }

    int r;

    printf(" Enter the number of times to rotate the array : ");
    scanf(" %d", &r);
    printf("\nArray after rotating by %d position(s) :\n", r);

    // Core/Logic Part Of Program
    r %= array_size;
    reverse_subarray(array, 0, array_size - 1);
    reverse_subarray(array, 0, r - 1);
    reverse_subarray(array, r, array_size - 1);

    for (int i = 0; i < array_size; i++)
    {
        printf("%d ", array[i]);
    }

    printf("\n");
    return 0;
}