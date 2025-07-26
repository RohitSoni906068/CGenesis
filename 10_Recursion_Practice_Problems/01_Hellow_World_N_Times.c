// Recursively prints "Hello World" a given number of times
#include <stdio.h>

void print_hello_world(int count)
{
    if (count == 0)
    {
        return;
    }

    printf("Hello World\n");
    print_hello_world(count - 1);
}

int main()
{
    int repetitions;

    printf(" Enter how many times you want to print 'Hello World' : ");
    scanf(" %d", &repetitions);

    print_hello_world(repetitions);

    return 0;
}