// Program to calculate simple interest

#include <stdio.h>
#include <math.h>

int main()
{

    float p, r, t, si, final_amount;

    printf("Enter the principle amount: ");
    scanf("%f", &p);
    printf("Enter the rate of interest (in percentage): ");
    scanf("%f", &r);
    printf("Enter the time period (in years): ");
    scanf("%f", &t);

    // r = r/100;

    si = (p * r * t) / 100;

    // 'p' is the principal amount.
    // 'r' is the rate of interest (percentage).
    // 't' is the time period (in years).

    final_amount = si + p;

    printf("The simple interest is: %.2f\n", si);

    printf("The final amount to be paid for %.2f year is: %.2f", t, final_amount);

    return 0;
}