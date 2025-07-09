#include <stdio.h>
int main()
{
    int a = 1; // "int" data type store intergers value

    float b; // "float" data type store Decimal Numbers/value+integers value
    b = 1.4;

    char c; // "char" data type store characters, A to Z and also Special Symbol like "@","&","$"...etc.
    c = 'a';

    printf("The value of a is %d\n", a); // "%d" is a format specifier for  "int" Data_Type used in input/output functions like printf() and scanf().
    printf("The value of b is %f\n", b); // "%f" is a format specifier for  "float" Data_Type used in input/output functions like printf() and scanf().
    printf("The value of c is %c\n", c); // "%c" is a format specifier for  "char" Data_Type used in input/output functions like printf() and scanf().
    return 0;
}