#include <stdio.h>

// Recursive function to solve the Tower of Hanoi puzzle
void towerOfHanoi(int n, char source, char auxiliary, char destination)
{
    if (n == 0)
    {
        return;
    }

    // Move n-1 disks from source to auxiliary
    towerOfHanoi(n - 1, source, destination, auxiliary);

    // Move the nth disk from source to destination
    printf("%c -> %c\n", source, destination);

    // Move the n-1 disks from auxiliary to destination
    towerOfHanoi(n - 1, auxiliary, source, destination);
}

int main()
{
    int diskCount;

    printf(" Enter number of disks : ");
    scanf(" %d", &diskCount);

    printf(" Steps to solve the Tower of Hanoi with %d disks :\n", diskCount);
    towerOfHanoi(diskCount, 'A', 'B', 'C');

    return 0;
}