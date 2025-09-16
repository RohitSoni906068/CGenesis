// Program to find the unique number in an array where all elements appear exactly twice, 
// except one value that appears only once.
#include <stdio.h>

#include <stdbool.h>

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

    // Find the first unique element in the array
    for (int j = 0; j < size; j++)
    {
        bool flag = true;

        for (int k = j + 1; k < size; k++)
        {
            // If the element is repeated, set the flag to false.
            if (array[j] == array[k]) flag = false;
        }

        // If the element is unique, print it and break.
        if (flag)
        {
            printf("The First unique element is %d at index %d.\n", array[j], j);
            break;
        }
    }

    return 0;
}