// Program to determine whether the seller has made a profit or incurred a loss. Also calculate the amount of profit made or loss incurred.
#include <stdio.h>

int main()
{
    float cost_price, selling_price;
    
    printf("Enter the cost price : ");
    scanf("%f", &cost_price);
    
    printf("Enter the selling price : ");
    scanf("%f", &selling_price);

    if (selling_price > cost_price)
    {
        printf("You made a Profit of : %.3f.\n", selling_price - cost_price);
    }

    else if (cost_price > selling_price)
    {
        printf("You incurred a Loss of : %.3f.\n", cost_price - selling_price);
    }

    else
    {
        printf("No Profit or Loss. Both Cost Price and Selling Price are equal (%.3f = %.3f).\n", cost_price, selling_price);
    }

    return 0;
}