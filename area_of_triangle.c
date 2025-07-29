// Program to calculate the area of a triangle using heron's formula

#include <stdio.h>
#include <math.h>

int main() {
    
    float a, b, c, result;
    
    printf("Finding the area of triangle using Heron's Formula\n");
    
    printf("Enter the size of 1st side (in centimeter): ");
    scanf("%f",&a);
    
    printf("Enter the size of 2nd side (in centimeter): ");
    scanf("%f",&b);
    
    printf("Enter the size of 3rd side (in centimeter): ");
    scanf("%f",&c);
    
    float s = (a + b + c)/2;
    
    result = sqrt(s * (s - a) * (s - b) * (s - c));
    
    printf("The area of triangle is: %2fsqcm", result);

    return 0;
}