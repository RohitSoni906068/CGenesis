// Program to find the minimum value in a user-defined array using the 'limits.h' library functions.
#include <stdio.h>

#include <limits.h>

int main()
{
    int array_size;
    int min = INT_MAX; // Initialize to the greatest possible integer

    printf("Enter size of the array : ");
    scanf("%d", &array_size);

    int array[array_size];
    printf("Enter all %d elements of array -:\n", array_size);

    for (int i = 0; i < array_size; i++)
    {
        scanf("%d", &array[i]);

        // Update min if a lower element is found
        if (min > array[i]) min = array[i];
    }

    printf("Minimum value in the array is : %d\n", min);
    return 0;
}
