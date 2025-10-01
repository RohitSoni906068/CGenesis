// Program to store the first 'n' Fibonacci numbers in an array.
#include <stdio.h>

int main()
{
    int term;
    printf("Enter how many Fibonacci numbers you want to store/array-size : ");
    scanf("%d", &term);

    int array[term];

    // Initialize array with first two terms of Fibonacci sequence
    array[0] = 0;
    array[1] = 1;

    // Initialize array with remaining terms of Fibonacci sequence
    for (int i = 2; i < term; i++)
    {
        array[i] = array[i - 1] + array[i - 2];
    }

    // Print the Fibonacci sequence
    printf("Fibonacci sequence of %d terms : ", term);
    for (int i = 0; i < term; i++)
    {
        printf("%d ", array[i]);
    }

    return 0;
}