#include <stdio.h>
/*
break Statement:

Purpose:
The continue statement skips the current iteration of the loop and jumps to the next iteration.
It does not terminate the entire loop, just skips one cycle.

Syntax:
    continue;
*/
int main()
{
    // Example 1:
    for (int i = 1; i <= 5; i++)
    {
        if (i == 3)
        {
            continue; // Skip printing when i is 3
        }
        printf("%d\n", i);
    }
    return 0;

    // Example 2:
    int r = 0;
    while (r < 5)
    {
        r++;
        if (r == 3)
        {
            continue; // Skip the rest of loop body when i == 3
        }
        printf("%d\n", r);
    }
    return 0;
}