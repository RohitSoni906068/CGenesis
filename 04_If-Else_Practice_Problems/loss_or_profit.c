// If cost price and selling price of an item is input through the keyboard,
// write a program to determine whether the seller has made profit or incurred loss.
// Also determine how much profit he made or loss he incurred.
#include <stdio.h>

int main()
{
    float cost_price, selling_price;
    printf("Enter the Cost Price of your item: ");
    scanf("%f", &cost_price);
    printf("Enter the Selling Price of your item: ");
    scanf("%f", &selling_price);

    if (selling_price > cost_price)
    {
        printf("You made a Profit of: %.3f\n", selling_price - cost_price);
    }
    else if (cost_price > selling_price)
    {
        printf("You incurred a Loss of: %.3f\n", cost_price - selling_price);
    }
    else
    {
        printf("No Profit or Loss. Both Cost Price and Selling Price are equal (%.3f = %.3f)\n", cost_price, selling_price);
    }

    return 0;
}