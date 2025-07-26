#include <stdio.h>
/*

“Function gets copies of parameters — it does not change the actual value of variables.”

 when you pass variables to a function in C, you are passing them by value (i.e., a copy is made).
 Any changes made inside the function affect only the copy, not the original variable.

Ex.....*/
void modify(int x)
{
    x = x + 10; // modifies the copy
    printf("Inside function : x = %d\n", x);
}

int main()
{

    int a = 5;
    modify(a);
    printf("In main : a = %d\n", a); // Original remains unchanged
    return 0;
}