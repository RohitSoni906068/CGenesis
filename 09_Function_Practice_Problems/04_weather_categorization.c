// Function to categorize and print weather conditions based on temperature input (Hot, Cold, Moderate).
#include <stdio.h>

void printWeatherCategory(float temperature)
{
    if (temperature <= 15)
    {
        printf("The weather in your area is cold.\n");
    }
    
    else if (temperature > 15 && temperature <= 30)
    {
        printf("The weather in your area is moderate/favorable.\n");
    }
    
    else
    {
        printf("The weather in your area is hot.\n");
    }
}

int main()
{
    float temperature;
    printf("Enter the temperature of your area in degrees Celsius : ");
    scanf("%f", &temperature);

    printWeatherCategory(temperature);

    return 0;
}