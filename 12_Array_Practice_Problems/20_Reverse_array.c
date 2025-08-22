// Program to reverse an array in-place without using any additional array
#include <stdio.h>
void reverse(int array[], int size)
{
    int start_index = 0, end_index = size - 1;

    // Swaping Code
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

    reverse(array, array_size);

    printf(" Array after reversing : ");
    for (int i = 0; i < array_size; i++)
    {
        printf("%d ", array[i]);
    }

    printf("\n");
    return 0;
}
