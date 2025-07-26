// Print hello world ‘n’ times. Take ‘n’ as input from user
#include <stdio.h>
int main()
{
    int n;
    printf(" Enter how many times you want to print 'Hellow World' : ");
    scanf(" %d", &n);
    for (int i = 1; i <= n; i++)
    {
        printf(" Hellow World\n");
    }
    return 0;
}
