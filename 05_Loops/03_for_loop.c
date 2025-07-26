#include <stdio.h>
/*
for Loop-> Used when the number of iterations is known.

Syntax of for Loop -:
for (initialization; condition; increment/decrement) {
    // Code to execute in each loop iteration
}

*/
int main()
{
    // The initialization part of the for loop is executed only once — at the very beginning of the loop.

    for (int i = 10; i >= 1; i--) // iteration will be stopped when conditions get flase.
    {                             //  If true, execute the loop body.
        printf("%d ", i);

    } // On each iteration, the program skips initialization, checks the condition, runs the code block, and does the increment/decrement.
    return 0;
}