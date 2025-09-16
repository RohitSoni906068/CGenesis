// Program to find and count all triplets in an array whose sum equals a given target value. 
#include <stdio.h>

int main()
{
    int array_size, target_sum, triplet_count = 0;

    printf("Enter the size of the array : ");
    scanf("%d", &array_size);

    int array[array_size];

    for (int i = 0; i < array_size; i++)
    {
        printf("Enter value for element %d : ", i);
        scanf("%d", &array[i]);
    }

    printf("Enter value of target sum : ");
    scanf("%d", &target_sum);
    
    // Find and print all valid triplets
    printf("\nTriplets with sum equal to %d -> ", target_sum);

    for (int j = 0; j < array_size; j++)
    {
        for (int k = j + 1; k < array_size; k++)
        {
            for (int r = k + 1; r < array_size; r++)
            {
                if (array[j] + array[k] + array[r] == target_sum)
                {
                    printf("(%d, %d,%d) ", array[j], array[k], array[r]);
                    triplet_count++;
                }
            }
        }
    }

    // Print total number of such triplets
    printf("\nTotal number of triplets with sum %d : %d\n", target_sum, triplet_count);

    return 0;
}
