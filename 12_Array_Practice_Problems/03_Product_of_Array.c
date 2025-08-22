// Write a Program to calculates the product of all elements in an integer array.
// The user is prompted to input the array size and its elements.

#include <stdio.h>

int main()
{
    int array_size, product = 1;

    printf(" Enter size of array : ");
    scanf(" %d", &array_size);

    int array[array_size];

    for (int i = 0; i < array_size; i++)
    {
        printf(" Enter value for element %d : ", i);
        scanf(" %d", &array[i]);
        product *= array[i];
    }

    printf(" Sum of all elements in the array is : %d\n", product);

    return 0;
}
