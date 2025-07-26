#include <stdio.h>
/*
infinite loop is a loop that never ends because its condition always remains true,
or it has no condition at all that leads to termination.
*/
int main()
{
    while (1)
    {
        // Code that runs forever
    }
    for (;;)
    {
        // Infinite loop using empty condition
    }

    // Using do-while with always-true condition
    do
    {
        // Code
    } while (1);
    // It is a bad habit dut Leads to high CPU usage, unresponsive programs, or crashes.
    return 0;
}