// Create Number Guessing Game Using Do-While Loop.
// You can use chatgpt for only generate a random number from 1 to 100.
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    srand(time(0)); // Seed the random number generator.
    int random_number = (rand() % 100) + 1; // Generate a random number between 1 and 100.

    printf("\n Hi, I am Computer I think a Number Can you Guess the Number \n");

    int guess, guesses = 0;
    do
    {
        printf(" Guess the Number : ");
        scanf("%d", &guess);

        if (guess > random_number)
        {
            printf(" Please, Guess Small Number\n ");
        }

        else if (random_number > guess)
        {
            printf(" Please, guess Large Number\n ");
        }

        guesses++;
    } while (guess != random_number);   
    
    printf(" Conguration You guess right in : %d guesses ", guesses);
    return 0;
}