// Program: Demonstrates how to declare an array, take input from the user, and display the array elements.

#include <stdio.h>
int main()
{
    int arraySize;
    printf(" Enter the size of the array : ");
    scanf(" %d", &arraySize);

    int numbers[arraySize];

    for (int index = 0; index < arraySize; index++)
    {
        printf(" Enter value for element %d : ", index);
        scanf(" %d", &numbers[index]);
    }
    for (int index = 0; index < arraySize; index++)
    {
        printf(" Value in %d Element is : %d\n", index, numbers[index]);
    }

    return 0;
}