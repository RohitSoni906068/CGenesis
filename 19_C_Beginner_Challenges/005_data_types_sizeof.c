// Program that declares one variable of each of the fundamental data types (int, float, double, char)
// and prints their size using sizeof() operator.
#include<stdio.h>

int main()
{
    int integer;
    float decimal;
    double doub;
    char character;

    printf("Size of int is : %lu bytes\n", sizeof(integer));
    printf("Size of float is : %lu bytes\n", sizeof(decimal));
    printf("Size of double is : %lu bytes\n", sizeof(doub));
    printf("Size of char is : %lu bytes\n", sizeof(character));

    return 0;
}