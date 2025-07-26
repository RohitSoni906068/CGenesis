#include <stdio.h>
/*
break Statement:

Purpose:
The break statement terminates the loop immediately and transfers control to the statement after the loop or switch.

Used in:
    •	for, while, do-while loops
    •	switch statements

Syntax:
    break;
*/
int main()
{
    // Example 1:
    for (int i = 1; i <= 10; i++)
    {
        if (i == 5)
        {
            break; // Exit the loop when i is 5
        }
        printf("%d\n", i);
    } // Loop stops as soon as i == 5.

    // Example 2:
    int r = 1;
    while (r <= 10)
    {
        if (r == 4)
            break; // Exit the loop when r is 4
        printf("%d\n", r);
        r++;
    } // Loop stops as soon as r == 4.
    return 0;
}