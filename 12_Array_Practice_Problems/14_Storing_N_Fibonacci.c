// Program to store the first 'n' Fibonacci numbers in an array
#include <stdio.h>

int main()
{
    int term;
    printf(" Enter how many Fibonacci numbers you want to store : ");
    scanf(" %d", &term);

    int array[term];

    array[0] = 0;
    array[1] = 1;
    for (int i = 2; i < term; i++)
    {
        array[i] = array[i - 1] + array[i - 2];
    }

    printf(" Fibonacci sequence : ");
    for (int i = 0; i < term; i++)
    {
        printf("%d ", array[i]);
    }

    return 0;
}