// Write a Program to calculates the sum of all elements in an integer array.
// The user is prompted to input the array size and its elements.

#include <stdio.h>

int main()
{
    int array_size, sum = 0;

    printf(" Enter size of array : ");
    scanf(" %d", &array_size);

    int array[array_size];

    for (int i = 0; i < array_size; i++)
    {
        printf(" Enter value for element %d : ", i);
        scanf(" %d", &array[i]);
        sum += array[i];
    }

    printf("Sum of all elements in the array : %d\n", sum);

    return 0;
}