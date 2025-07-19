// Function to print greeting based on time of day(“good morning”, “good afternoon”,“good night”).
#include <stdio.h>

void printGreetingBasedOnTime(char timeCode)
{
    if (timeCode == 'M')
    {
        printf(" Good Morning\n");
    }
    else if (timeCode == 'A')
    {
        printf(" Good Afternoon\n");
    }
    else if (timeCode == 'N')
    {
        printf(" Good Night\n");
    }
    else
    {
        printf(" Invalid input. Please enter 'M', 'A', or 'N'.\n");
    }
}

int main()
{
    char timeCode;
    printf(" Enter the time of day (M = Morning, A = Afternoon, N = Night) : ");
    scanf(" %c", &timeCode);
    printGreetingBasedOnTime(timeCode);
    return 0;
}