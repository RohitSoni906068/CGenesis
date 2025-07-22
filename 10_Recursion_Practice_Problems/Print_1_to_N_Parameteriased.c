// Recursively prints numbers from '1' to 'N' in increasing order
#include <stdio.h>

void print_increasing(int start, int end)
{
    if (start > end)
    {
        return;
    }
    printf(" %d", start);
    print_increasing(start + 1, end);
}

int main()
{
    int n;
    printf(" Enter the maximum number : ");
    scanf(" %d", &n);

    print_increasing(1, n);
    printf("\n");
    return 0;
}