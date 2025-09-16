// Program to find the minimum value in a user-defined array. 
#include <stdio.h>

int main()
{
    int size, min;

    printf("Enter the size of the array : ");
    scanf("%d", &size);

    int array[size];

    for (int i = 0; i < size; i++)
    {
        printf("Enter value for element %d : ", i);
        scanf("%d", &array[i]);

        // Initialize min on first iteration
        min = (i == 0) ? array[i] : min;

        // Update min if a smaller element is found
        if (array[i] < min) min = array[i];
    }

    printf("Minimum value in the given array is : %d\n", min);
    return 0;
}
