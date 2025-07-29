// Program to check if a year is a leap year or not

#include <stdio.h>

int main() {
    
    int year;
    
    printf("Enter a year to check if it is even or odd (ex:2020): ");
    scanf("%d", &year);
    
    if((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)){
        printf("It is a leap year");
    }
    else{
        printf("It is not a leap year");
    }

    return 0;
}