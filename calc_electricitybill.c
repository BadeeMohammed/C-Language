// Program to calculate electricity bill based on units

#include <stdio.h>

int main()
{

    float price_per_unit, final_bill;
    int units_used;

    printf("Enter the price per unit: ");
    scanf("%f", &price_per_unit);

    printf("Enter the number of units to calculate the electricity bill: ");
    scanf("%d", &units_used);

    final_bill = units_used * price_per_unit;

    printf("The electricity bill is of ₹%.2f", final_bill);

    return 0;
}