#include <stdio.h>

int main()
{
    /*
     * NESTED IF STATEMENTS
     *
     * If statements inside other if statements create hierarchical logic.
     * Inner conditions only execute if outer conditions are true.
     *
     * Structure:
     * if (outer_condition) 
     * {
     *     if (inner_condition) 
     *     {
     *         // Executes when both outer and inner are true
     *     } 
     *     else 
     *     {
     *         // Executes when outer is true, inner is false
     *     }
     * } 
     * else 
     * {
     *     // Executes when outer condition is false
     * }
     */

    int temperature, isRaining;
    printf("Enter temperature (°C) : ");
    scanf("%d", &temperature);
    printf("Is it raining? (1 for yes, 0 for no) : ");
    scanf("%d", &isRaining);

    if (temperature >= 20)
    {
        // Outer condition: temperature is warm
        printf("Temperature is comfortable.\n");

        if (isRaining) // Executes when both outer and inner are true
        {
            // Inner condition: it's raining
            printf("Take an umbrella - it's warm but raining.\n");
        }
        else // Executes when outer is true, inner is false
        {
            // Inner condition: not raining
            printf("Perfect weather for outdoor activities!\n");
        }
    }
    else
    {
        // Outer condition: temperature is cold
        printf("Temperature is cold.\n");

        if (isRaining)
        {
            printf("Stay indoors - it's cold and raining.\n");
        }
        else
        {
            printf("Dress warmly if going outside.\n");
        }
    }

    return 0;
}
