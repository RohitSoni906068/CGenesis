// print all Even numbers within a given range:
#include <stdio.h>
int main()
{
    int r, s;
    printf(" Enter Numbers from start printing even number : ");
    scanf(" %d", &r);
    printf(" Enter Number where end of printing even number : ");
    scanf(" %d", &s);
    for (int i = r; i <= s; i++)
    {
        if (i % 2 == 0)
        {
            printf(" %d", i);
        }
    }
    printf("\n");
    return 0;
}
