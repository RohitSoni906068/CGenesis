#include <stdio.h>
int main()
{
    printf(" Hello World \n");           // "\n" is used to move the cursor to the next line in the output
    printf(" Rohit! ");                  // Rohit Print after printing "Hello World " they are not print together becasue of '\n'
    printf(" Hell World\n I am Rohit "); // Hello World and Hello Rohit will be print in two line becasue of '\n'
    return 0;
}