#include <stdio.h>
int main()
{
    int r = 3;
    int k = 6;
    int s = 9;
    printf("The value is %d\n", r * k / s + 7);
    printf("The value is %d", 3 * k / 2 * s + 7 * r);
    // 3*k/2*s + 7*r
    // 3*k/2*s + 21
    // 18/2*s + 21
    // 9*s + 21
    // 81 + 21
    // 102 is Answer.
    return 0;
}