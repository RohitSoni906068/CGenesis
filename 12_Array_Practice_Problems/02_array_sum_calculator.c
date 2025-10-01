// Program to calculate the sum of all elements in an integer array. 
// Getting array size and elements from user
#include <stdio.h>

int main()
{
    int array_size, sum = 0;

    printf("Enter size of array : ");
    scanf("%d", &array_size);

    int array[array_size];
    printf("Enter all %d elements of array -:\n", array_size);

    for (int i = 0; i < array_size; i++)
    {
        scanf("%d", &array[i]);
        
        sum += array[i];
    }

    printf("Sum of all elements of array is : %d\n", sum);

    return 0;
}