// Function to calculate the gravitational force of attraction on a body of mass 'm' exerted by Earth.
// Consider g = 9.8m/s2.
#include <stdio.h>

// Function to calculate the force of attraction
float calculateForce(float mass)
{
    float g = 9.8f; // Acceleration due to gravity
    return mass * g;
}

int main()
{
    float mass;
    printf("Enter mass of the body (in kg) : ");
    scanf("%f", &mass);

    float force = calculateForce(mass);
    printf("Force of attraction on the body is : %.2f Newtons\n", force);

    return 0;
}