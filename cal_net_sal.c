// Program to calculate net salary with 10% deduction

#include <stdio.h>

int main() {

    float sal, net_sal;
    
    printf("Enter your salary: ");
    scanf("%f", &sal);
    
    net_sal = sal - (sal * 0.10);
    
    printf("The net salary is: %.2f",net_sal);

    return 0;
}