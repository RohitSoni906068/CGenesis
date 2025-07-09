#include <stdio.h>
int main()
{
    int r = 5;
    int s = 3;
    int k = r + s;
    printf("The value of a is %d and value of b is %d and sum is %d\n", r, s, k);
    // Modulus operator is used to get the remainder
    printf("The remainder when a is divided by b is: %d\n", r % s);
    return 0;
}