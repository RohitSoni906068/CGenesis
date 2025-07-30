// Program to store and display the first 10 multiples of 5 plus 1 in an array
#include <stdio.h>

void fillMultiplesOfFivePlusOne(int array[], int size)
{
    for (int i = 0; i < size; i++)
    {
        array[i] = 5 * i + 1;
    }
}

int main()
{
    int size = 10;
    int array[10];

    fillMultiplesOfFivePlusOne(array, size);

    for (int i = 0; i < size; i++)
    {
        printf("%d ", array[i]);
    }

    return 0;
}
