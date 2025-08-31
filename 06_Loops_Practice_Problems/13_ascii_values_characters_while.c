// Program to print all ASCII values and their equivalent characters from 'A' to 'Z'
// (characters can be uppercase or lowercase as specified by user) using a while loop.
#include <stdio.h>

int main()
{
    char ch, end;

    printf("Enter the starting character (small/capital) : ");
    scanf("%c", &ch);
    
    printf("Enter the ending character (small/capital) : ");
    scanf("%c", &end);

    while (ch <= end)
    {
        printf("%c = %d\n", ch, (int)ch);
        ch++;
    }

    return 0;
}