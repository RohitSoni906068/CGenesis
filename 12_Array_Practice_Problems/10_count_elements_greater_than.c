// Program to count the number of elements in an array that are greater than a given number x.
#include <stdio.h>

int main()
{
    int array_size, target_sum, count = 0;

    printf("Enter size of array : ");
    scanf("%d", &array_size);

    printf("Enter value of target number : ");
    scanf("%d", &target_sum);

    int array[array_size];

    for (int i = 0; i < array_size; i++)
    {
        printf("Enter value for element %d : ", i);
        scanf("%d", &array[i]);

        // Increment count if element is greater than target_sum
        if (array[i] > target_sum) count++;
    }

    printf("There are %d numbers greater than %d in the array.\n", count, target_sum);
    return 0;
}
