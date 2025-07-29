// Program to calculate EMI for a loan

#include <stdio.h>
#include <math.h>

int main() {
    
    float p, i, m, emi;
    
    printf("Enter the principle loan amount: ");
    scanf("%f",&p);
    
    printf("Enter the monthly interest rate (in percentage): ");
    scanf("%f",&i);
    
    printf("Enter the loan tenure (in months): ");
    scanf("%f",&m);
    
    i = i / 100;
    
    emi = p * i * pow(1+i, m) / (pow(1+i, m)-1);
    
    printf("The EMI to be paid monthly is: %.2f",emi);
    
    return 0;
}