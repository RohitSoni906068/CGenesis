// Program to calculate the sum of all elements in an integer array. 
// Getting array size and elements from user
#include <stdio.h>

int main()
{
    int array_size, sum = 0;

    printf("Enter size of array : ");
    scanf("%d", &array_size);

    int array[array_size];

    for (int i = 0; i < array_size; i++)
    {
        printf("Enter value for element %d : ", i);
        scanf("%d", &array[i]);
        
        sum += array[i];
    }

    printf("Sum of all elements in the array : %d\n", sum);

    return 0;
}
