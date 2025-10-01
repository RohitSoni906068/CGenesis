// Program to find the maximum value in a user-defined array.
#include <stdio.h>

int main()
{
    int array_size, max;

    printf("Enter size of array : ");
    scanf("%d", &array_size);

    int array[array_size];
    printf("Enter all %d elements of array -:\n", array_size);

    for (int i = 0; i < array_size; i++)
    {
        scanf("%d", &array[i]);

        // Initialize max on first iteration
        max = (i == 0) ? array[i] : max;

        // Update max if a greater element is found
        if (max < array[i]) max = array[i];
    }

    printf("Maximum Value in Array is : %d\n", max);
    return 0;
}
