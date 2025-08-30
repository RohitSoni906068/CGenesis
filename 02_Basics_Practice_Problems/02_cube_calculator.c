// Program to calculate the cube of a given number.
#include <stdio.h>
int main()
{
    int n;
    printf("Enter Number : ");
    scanf("%d", &n);
    int cube=n*n*n;
    printf("Cube of %d is : %d ", n, cube);
    return 0;
}