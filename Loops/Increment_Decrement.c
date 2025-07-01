#include <stdio.h>
int main()
{
    /*
    Increment Operator (++)
    It increases the value of a variable by 1.

    i++; -> Post-increment (increment happens after assignment)
    ++i; -> Pre-increment (increment happens before assignment)


    Decrement Operator (--)
    It decreases the value of a variable by 1.

    i--; -> Post-decrement (decrement happens after assignment)
    --i; -> Pre-decrement (decrement happens before assignment)

     Examples -......*/
    int i = 5;
    int a = ++i; // a = 6, i = 6 (increment happens before assignment)
    printf(" The Value of A is : %d.\n",a);
    int b = i++; // b = 6, i = 7 (increment happens after assignment)
    printf(" The Value of B is : %d.\n",b);

    
    return 0;
}