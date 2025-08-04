// This program calculates the difference between the sum of elements at even indices
// and the sum of elements at odd indices in an array.

#include <stdio.h>

int main()
{
    int array_size, even_sum = 0, odd_sum = 0;

    printf(" Enter the size of the array : ");
    scanf(" %d", &array_size);

    int array[array_size];

    for (int i = 0; i < array_size; i++)
    {
        printf(" Enter value for element %d : ", i);
        scanf(" %d", &array[i]);

        if (i % 2 == 0)
        {
            even_sum += array[i];
        }
        else
        {
            odd_sum += array[i];
        }
    }

    int difference = even_sum - odd_sum;
    printf(" Difference between even-index and odd-index sums : %d\n", difference);

    return 0;
}