// Program that determines the greatest of the three numbers.
#include <stdio.h>

int main()
{
    int first, second, third;

    printf("Enter First number : ");
    scanf("%d", &first);

    printf("Enter Second number : ");
    scanf("%d", &second);

    printf("Enter Third number : ");
    scanf("%d", &third);

    if (first > second)
    {
        if (first > third)
        {
            printf("%d is Greatest Number.\n", first);
        }
        else
        {
            printf("%d is Greatest Number.\n", third);
        }
    }

    else
    {
        if (second > third)
        {
            printf("%d is Greatest Number.\n", second);
        }
        else
        {
            printf("%d is Greatest Number.\n", third);
        }
    }

    /* 2nd Way -:
    if (first > second && first > third)
    {
        printf("%d is Greatest Number.\n", first);
    }

    else if (second > third)
    {
        printf("%d is Greatest Number.\n", second);
    }

    else
    {
        printf("%d is Greatest Number.\n", third);
    }
    */
   
    return 0;
}