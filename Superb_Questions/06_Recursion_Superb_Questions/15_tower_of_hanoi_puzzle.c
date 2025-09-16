// Recursive function to solve the Tower of Hanoi puzzle.
#include <stdio.h>

void towerOfHanoi(int n, char source, char auxiliary, char destination)
{
    // Base case: If there are no disks, return
    if (n == 0) return;
    
    // Move n-1 disks from source to auxiliary
    towerOfHanoi(n - 1, source, destination, auxiliary);

    // Move the nth disk from source to destination
    printf("%c -> %c\n", source, destination);

    // Move the n-1 disks from auxiliary to destination
    towerOfHanoi(n - 1, auxiliary, source, destination);

    return;
}

int main()
{ 
    int diskCount;

    printf("Enter number of disks : ");
    scanf("%d", &diskCount);

    // Handle invalid input/Edge cases
    if (diskCount < 1)
    {
        printf("Please enter a valid number of disks.\n");
        return 0;
    }

    printf("Steps to solve the Tower of Hanoi with %d disks -:\n", diskCount);
    towerOfHanoi(diskCount, 'A', 'B', 'C');

    return 0;
}