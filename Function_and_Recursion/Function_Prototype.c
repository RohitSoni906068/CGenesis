#include <stdio.h>
/*
Function prototype -:
  Function that tells the compiler about the function’s name, return type, and parametersbefore its actual
  definition or call. Ex-:

 Note-: A function must be declared before it is called, unless its definition appears before the call.
  */

// Function declaration (prototype)
void greet();

int main()
{
  greet(); //  Valid because of the earlier declaration
  return 0;
}

// Function definition
void greet()
{
  printf("Hello, Rohit!\n");
}