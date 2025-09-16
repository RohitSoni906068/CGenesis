// Recursive function to print a Zig-Zag pattern for the first N natural numbers.
// Ex: if N=4.
//  Input        Output
//  1            111
//  2            211121112
//  3            321112111232111211123
//  4            432111211123211121112343211121112321112111234

#include <stdio.h>

/**
 * Prints the zig-zag pattern for numbers from n to 1 and back,
 * using Pre -> In -> Post recursive structure.
 *
 * @param n The current number to process
 */
void printZigZag(int n)
{
    if (n == 0) return;
    
    printf("%d", n);    // Pre
    printZigZag(n - 1); // Left recursive call
    printf("%d", n);    // In
    printZigZag(n - 1); // Right recursive call
    printf("%d", n);    // Post
}
 
int main()
{
    int number;

    printf("Enter a number : ");
    scanf("%d", &number);

    for (int i = 1; i <= number; i++)
    {
        printf("%d : ", i);
        printZigZag(i);

        printf("\n");
    }

    return 0;
}