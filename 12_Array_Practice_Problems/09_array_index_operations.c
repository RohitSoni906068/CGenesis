// Given an array of integers, perform the following operations:
// - Multiply all values at odd indices by 2
// - Increment all values at even indices by 10
#include <stdio.h>

#define EVEN_INCREMENT 10
#define ODD_MULTIPLIER 2

int main()
{
    int array_size;

    printf("Enter size of the array : ");
    scanf("%d", &array_size);

    int array[array_size];

    // Input values and Process array
    for (int i = 0; i < array_size; i++)
    {
        printf("Enter value for element %d : ", i);
        scanf("%d", &array[i]);

        // Perform operations based on index
        array[i] = (i % 2 == 0) ? array[i] + EVEN_INCREMENT : array[i] * ODD_MULTIPLIER;
    }

    // Output modified array
    printf("Modified array : ");
    for (int j = 0; j < array_size; j++)
    {
        printf("%d ", array[j]);
    }

    printf("\n");
    return 0;
}
