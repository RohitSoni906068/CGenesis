// Count the number of elements in a given array greater than a given number x.
#include <stdio.h>

int main()
{
    int array_size, target_sum, count = 0;

    printf(" Enter size of array : ");
    scanf(" %d", &array_size);

    printf(" Enter value of target sum : ");
    scanf(" %d", &target_sum);

    int array[array_size];

    for (int i = 0; i < array_size; i++)
    {
        printf(" Enter value for element %d : ", i);
        scanf(" %d", &array[i]);

        if (array[i] > target_sum)
        {
            count++;
        }
    }

    printf(" There are %d numbers greater than %d.\n", count, target_sum);
    return 0;
}
