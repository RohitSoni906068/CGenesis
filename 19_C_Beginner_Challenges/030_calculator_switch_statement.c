// Program to create a simple calculator that uses a switch statement to perform basic arithmetic operations
// (like addition, subtraction, multiplication, and division).
#include <stdio.h>

int main()
{
    printf("Welcome to Simple Calculator\n");
    float first, second;
    char Operator;

    printf("Enter the First Number : ");
    scanf("%f", &first);

    printf("Enter the Second Number : ");
    scanf("%f", &second);

    printf("Supported Operations are +, -, *, /\n");
    printf("Select the Operation (+, -, *, /), which you want to perform on given two numbers (%.3f, %.3f) : ", first, second);
    scanf(" %c", &Operator);

    switch (Operator)
    {
    case '+':
        printf("The Sum of (%.3f + %.3f) is : %.3f\n", first, second, first + second);
        break;

    case '-':
        printf("The Substraction of (%.3f - %.3f) is : %.3f\n", first, second, first - second);
        break;

    case '*':
        printf("The Multiplication of (%.3f * %.3f) is : %.3f\n", first, second, first * second);
        break;

    case '/':
        printf("The Division of (%.3f / %.3f) is : %.3f\n", first, second, first / second);
        break;

    default:
        printf("Invalid / Unsupported Operation, Operation Must be +, -, *, /\n");
        break;
    }
    
    return 0;
}