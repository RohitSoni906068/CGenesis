// Program to find a duplicate element in an integer array where all elements appear exactly twice, 
// except one value that appears more than twice.
#include <stdio.h>

int main()
{
    int size;

    printf("Enter the size of the array : ");
    scanf("%d", &size);

    int array[size];

    for (int i = 0; i < size; i++)
    {
        printf("Enter value for element %d : ", i);
        scanf("%d", &array[i]);
    }

    int duplicateFound = 0;

    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (array[i] == array[j])
            {
                printf("%d is a duplicate element at indices (%d, %d)\n", array[i], i, j);
                duplicateFound = 1;
                break;
            }
        }   
    }

    // if duplicateFound is not equal to 1.
    if (!duplicateFound) printf("No duplicate element found in the array.\n");

    return 0;
}