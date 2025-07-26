#include <stdio.h>
int main()
{
    /*
    Decrement Operator (--)
    It decreases the value of a variable by 1.

    i--; -> Post-decrement (decrement happens after assignment)
    --i; -> Pre-decrement (decrement happens before assignment)

     Examples -......*/

    int r = 5;
    int s = --r; // a = 4, i = 4 (dencrement happens before assignment)
    printf(" The Value of S is : %d.\n", s);

    int q = r--; // b = 6, i = 7 (decrement happens after assignment)
    printf(" The Value of Q is : %d.\n", q);
    return 0;
}