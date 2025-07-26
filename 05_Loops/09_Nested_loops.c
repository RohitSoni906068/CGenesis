#include <stdio.h>
/*
A nested loop is a loop inside another loop.
Ex-:
for (int i = 0; i < outer_limit; i++) {
    for (int j = 0; j < inner_limit; j++) {
        Code to execute
    }
}

Note-: The inner loop executes completely for each iteration of the outer loop.
*/
int main()
{
    int row, column;
    printf(" Enter Number of Row : ");
    scanf(" %d", &row);
    printf(" Enter how many number of starts you want in each column : ");
    scanf(" %d", &column);
    for (int i = 0; i <= row; i++) // The outer loop controls how many times the inner loop will run fully.
    {
        for (int j = 0; j <= column; j++) // The inner loop runs completely for every single iteration of the outer loop.
        {
            printf(" *");
        }
        printf("\n");
    }
    return 0;
}