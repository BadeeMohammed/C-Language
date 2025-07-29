// Program to convert rupees to dollars

#include <stdio.h>

int main() {

    float inr, usd, val;
    
    printf("Enter current value of 1 dollar in rupees: ");
    scanf("%f", &val);
    
    printf("Enter the amount to rupees to convert in dollars: ");
    scanf("%f", &inr);
    
    usd = val * inr;
    
    printf("%.2f rupees in dollars is = %.2f", inr, usd);

    return 0;
}