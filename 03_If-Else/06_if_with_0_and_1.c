#include <stdio.h>
int main()
{
    int r = 0, s = 1;
    /* 
    By default in C, Non-Zero Value Consider True and 0 Consider as False.
    
    • if (0) → false → block does not run.
	• if (1) or if (any non-zero) → true → block does run.

    */
    if (s) 
    {
        printf(" yes, this is correct because %d is non-zero value.\n", s);
    }
    if (r)
    {
        printf(" This is print becasue value of %d is zero\n",r);
    }
    return 0;
}