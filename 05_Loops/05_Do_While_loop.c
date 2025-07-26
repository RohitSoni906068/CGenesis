#include <stdio.h>
/*
do while loop-> It’s different from a while loop because the condition is checked after the loop body executes, not before.

Syntax of while loop:
do {
    Code to be executed
} while (condition);

*/
int main()
{

    int i = 1;
    do // Execute the code inside the do block.
    {
        printf("i = %d\n", i);
        i++;
    } while (i <= 5); // Check the while condition.
                      // If the condition is true, go back to step 1.
                      // If the condition is false, exit the loop.
    return 0;
}