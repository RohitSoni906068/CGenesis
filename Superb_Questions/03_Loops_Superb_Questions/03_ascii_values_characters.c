// Program to print all ASCII values and their equivalent characters from 'A' to 'Z'
// (characters can be uppercase or lowercase as specified by user) using a for loop.
#include<stdio.h>

int main()
{
    char ch, end;

    printf("Enter the starting character (small/capital) : ");
    scanf("%c", &ch);

    printf("Enter the ending character (small/capital) : ");
    scanf("%c", &end);

    for (char i = ch; i <= end; i++)
    {
        printf("%c = %d\n", i, (int)i);
    }
    
    return 0;
}