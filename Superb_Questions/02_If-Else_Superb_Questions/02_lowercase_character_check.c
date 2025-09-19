// Program to determine whether a character entered by the user is lowercase.
#include <stdio.h>

int main()
{
    char ch;
    printf("Enter Character : ");
    scanf("%c", &ch);
    
    if (ch >= 'a' && ch <= 'z')
    {
        printf("%c is a lowercase character.\n", ch);
    }
    
    else
    {
        printf("%c is not a lowercase character.\n", ch);
    }

    return 0;
}