#include <stdio.h>
/*
while loop-> Used when the number of iterations is unknown, and the condition is checked before each iteration.

Syntax of while loop:
while (condition) {
    // code block to be executed
}

Flowchart of while loop:
      +---------------------+
      |     condition       |
      +----------+----------+
                 |
              true
                 |
           +-----v------+
           |  Loop Body |
           +------------+
                 |
                 |
             [repeat]
                 |
               false
                 |
            (Exit the loop)
*/
int main()
{
    int i = 1;
    while (i <= 5) // iteration will be stopped when conditions get flase.
    {              //  If true, execute the loop body.

        printf("%d\n", i);
        i++; // increment i
    }

    return 0;
}