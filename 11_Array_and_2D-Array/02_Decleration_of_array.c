/* 📘 Array Declarations and Initializations in C

1. Declaration Only:
   - Syntax: int a[5];
   - Reserves space; values are uninitialized (garbage).

2. Declaration + Manual Assignment:
    - Declare first, assign values later using index.

3. Declaration + Initialization at Once:
    - Syntax: int b[5] = {10, 20, 30, 40, 50};
    - All values are initialized at once.

4. Partial Initialization:
    - Syntax: int c[5] = {1, 2};
    - Remaining elements are automatically set to 0.

5. Compiler-Deduced Size:
    - Syntax: int d[] = {5, 10, 15};
    - Compiler sets array size based on number of elements.
*/
#include <stdio.h>
int main()
{

// ✅ 1. Declaration Only (No Initialization)
    int a[5]; // Only declaration

// ✅ 2. Declaration + Manual Assignment (Later Initialization)
    int a[5];
    a[0] = 10;
    a[1] = 20;
    a[2] = 30;
    a[3] = 40;
    a[4] = 50;

// ✅ 3. Declaration + Initialization at the Same Time
    int b[5] = {10, 20, 30, 40, 50};

// ✅ 4. Partial Initialization (Remaining elements = 0)
    int d[] = {5, 10, 15}; // Compiler decides size = 3

// ✅ 5. Compiler-Deduced Size (size = 3)
    int d[] = {5, 10, 15};

    return 0;
}