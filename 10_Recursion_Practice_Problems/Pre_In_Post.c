// Question: Print Zig-Zag Pattern using Recursion
// Example:
// Input: 2
// Output: 2 1 1 1 2 1 1 1 2
#include <stdio.h>

// Prints a zig-zag pattern using recursion:
// Format: Pre -> Left Subtree -> In -> Right Subtree -> Post
void printZigZag(int n)
{
    if (n == 0)
    {
        return;
    }

    printf(" Pre : %d\n", n);  // Pre
    printZigZag(n - 1);        // Left recursive call
    printf(" In : %d\n", n);   // In
    printZigZag(n - 1);        // Right recursive call
    printf(" Post : %d\n", n); // Post
}

int main()
{
    int number;

    printf(" Enter a number : ");
    scanf(" %d", &number);

    printZigZag(number);

    return 0;
}