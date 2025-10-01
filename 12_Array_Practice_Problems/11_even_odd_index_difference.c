// Program to calculate the difference between the sum of elements at even indices and, 
// the sum of elements at odd indices in an array.

#include <stdio.h>

int main()
{
    int array_size, even_sum = 0, odd_sum = 0;

    printf("Enter the size of the array : ");
    scanf("%d", &array_size);

    int array[array_size];
    printf("Enter all %d elements of array -:\n", array_size);

    for (int i = 0; i < array_size; i++)
    {
        scanf("%d", &array[i]);

        // Calculate sum of elements on 0 based-index
        if (i % 2 == 0) even_sum += array[i];
        else odd_sum += array[i];
    }

    int difference = even_sum - odd_sum;
    printf("Difference between even-index sum(%d) and odd-index sum(%d) : %d\n", even_sum, odd_sum, difference);

    return 0;
}
