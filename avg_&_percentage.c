// Program to input marks of 3 subjects, calculate average and percentage
#include <stdio.h>

int main() {
    
    float s1, s2, s3, avg, perc, sum;
    
    printf("Enter marks of 1st subject (<=10): ");
    scanf("%f", &s1);
    printf("Enter marks of 2nd subject (<=10): ");
    scanf("%f", &s2);
    printf("Enter marks of 3rd subject (<=10): ");
    scanf("%f", &s3);
    
    sum = s1 + s2 + s3;
    avg = sum / 3;
    perc = ( sum / 30 )* 100;
    
    printf("The average is: %f\n", avg);
    printf("The percentage is: %f%\n", perc);

    return 0;
}