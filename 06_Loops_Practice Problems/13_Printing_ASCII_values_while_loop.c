// Write a program to print all the ASCII values and their equivalent characters From 'A'(characters small/capital given by user)
// to 'Z'(Character small/capital given by user) using while loop.
#include <stdio.h>
int main()
{
    char ch, end;

    printf(" Enter the starting character (small/capital) : ");
    scanf(" %c", &ch);
    printf(" Enter the ending character (small/capital) : ");
    scanf(" %c", &end);
    while (ch <= end)
    {
        printf(" %c = %d\n", ch, (int)ch);
        ch++;
    }
    return 0;
}