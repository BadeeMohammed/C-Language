/* C program to input two integers and printing their sum, difference, and product */

#include<stdio.h>

int main()
{
    int a, b, sum, diff, prod;
    
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    
    sum = a + b;
    prod = a * b;
    diff = a - b;
    
    printf("Sum = %d \nProduct = %d \nDifference = %d ", sum, prod, diff);
    
    return 0;
}