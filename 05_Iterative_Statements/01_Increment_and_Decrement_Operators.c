#include <stdio.h>

/*
 * CHAPTER 1: INCREMENT AND DECREMENT OPERATORS
 *
 * Understanding increment (++) and decrement (--) operators is essential
 * before learning loops, as they are commonly used in loop control.
 *
 * These operators modify a variable's value by 1:
 * - Increment (++) increases value by 1
 * - Decrement (--) decreases value by 1
 *
 * TIMING MATTERS:
 * - Pre-increment (++i): Increment happens BEFORE the value is used
 * - Post-increment (i++): Increment happens AFTER the value is used
 * - Pre-decrement (--i): Decrement happens BEFORE the value is used
 * - Post-decrement (i--): Decrement happens AFTER the value is used
 */

int main()
{
    printf("=== INCREMENT OPERATORS ===\n");

    // Pre-increment example
    int i = 5;
    int a = ++i; // i becomes 6 first, then assigned to a
    printf("Pre-increment: i = %d, a = %d\n", i, a);

    // Post-increment example
    int b = i++; // i's current value (6) assigned to b, then i becomes 7
    printf("Post-increment: i = %d, b = %d\n", i, b);

    printf("\n=== DECREMENT OPERATORS ===\n");

    // Pre-decrement example
    int j = 5;
    int c = --j; // j becomes 4 first, then assigned to c
    printf("Pre-decrement: j = %d, c = %d\n", j, c);

    // Post-decrement example
    int d = j--; // j's current value (4) assigned to d, then j becomes 3
    printf("Post-decrement: j = %d, d = %d\n", j, d);

    return 0;
}