// Program to find and count all pairs in an array whose sum equals a given target.
#include <stdio.h>

int main()
{
    int array_size, target_sum, pair_count = 0;

    // Input the target sum value
    printf(" Enter value of target sum : ");
    scanf(" %d", &target_sum);

    printf(" Enter the size of the array : ");
    scanf(" %d", &array_size);

    int array[array_size];

    for (int i = 0; i < array_size; i++)
    {
        printf(" Enter value for element %d : ", i);
        scanf(" %d", &array[i]);
    }

    // Find and print all valid pairs
    printf("\nPairs with sum equal to %d -> ", target_sum);

    for (int j = 0; j < array_size; j++)
    {
        for (int k = j + 1; k < array_size; k++)
        {
            if (array[j] + array[k] == target_sum)
            {
                printf("(%d, %d) ", array[j], array[k]);
                pair_count++;
            }
        }
    }

    // Print total number of such pairs
    printf("\nTotal number of pairs with sum %d : %d\n", target_sum, pair_count);

    return 0;
}
