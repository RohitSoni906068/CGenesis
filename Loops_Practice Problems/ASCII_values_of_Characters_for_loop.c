// Write a program to print all the ASCII values and their equivalent characters From 'A'(characters small/capital given by user)
// to 'Z'(Character small/capital given by user)using for loop.
#include<stdio.h>
int main()
{
    char ch, end;

    printf(" Enter the starting character (small/capital) : ");
    scanf(" %c", &ch);
    printf(" Enter the ending character (small/capital) : ");
    scanf(" %c", &end);
    for (char i = ch; i <= end; i++)
    {
        printf(" %c = %d\n", i, (int)i);
    }
    return 0;
}