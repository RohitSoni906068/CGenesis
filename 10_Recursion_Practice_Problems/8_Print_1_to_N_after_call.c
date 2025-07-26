// Prints numbers from 1 to n using recursion
#include <stdio.h>

void print_increasing(int n) {
    if (n == 0) {
        return;
    }
    print_increasing(n - 1);
    printf("%d ", n);
}

int main() {
    int n;
    printf(" Enter a number : ");
    scanf(" %d", &n);

    print_increasing(n);
    printf("\n");
    return 0;
}