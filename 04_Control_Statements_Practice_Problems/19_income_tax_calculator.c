// Calculate the income tax paid by an employee to the government according to the following tax slabs:
//     Income Slab          Tax Rate
//     2.5L - 5.0L         5%
//     5.0L - 10.0L        20%
//     Above 10.0L         30%
#include <stdio.h>

int main()
{
    int income;
    float tax = 0;

    printf("Enter income : ");
    scanf("%d", &income);
    
    if (income <= 250000)
    {
        tax = 0;
    }
    
    else if (income > 250000 && income <= 500000)
    {
        tax = 0.05 * (income - 250000);
    }
    
    else if (income > 500000 && income <= 1000000)
    {
        tax = 0.05 * (500000 - 250000) + 0.2 * (income - 500000);
    }
    
    else
    {
        tax = 0.05 * (500000 - 250000) + 0.2 * (1000000 - 500000) + 0.3 * (income - 1000000);
    }
    printf("The total tax you need to pay is %.3f\n", tax);

    return 0;
}