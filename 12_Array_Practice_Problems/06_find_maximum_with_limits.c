// Program to find the maximum value in a user-defined array using the 'limits.h' library functions.
#include <stdio.h>

#include <limits.h>

int main()
{
    int array_size;
    int max = INT_MIN; // Initialize to the lowest possible integer

    printf("Enter size of the array : ");
    scanf("%d", &array_size);

    int array[array_size];
    printf("Enter all %d elements of array -:\n", array_size);

    for (int i = 0; i < array_size; i++)
    {
        scanf("%d", &array[i]);

        // Update max if a greater element is found
        if (array[i] > max) max = array[i];
    }

    printf("Maximum value in the array is : %d\n", max);
    return 0;
}
