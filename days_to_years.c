// Program to convert days into years , weeks, and days

#include <stdio.h>

int main() {
    
    int days, years, weeks, remain_days;
    
    printf("Enter the number of days to be converted in years, weeks, and days: ");
    
    scanf("%d", &days);
    
    years = days / 365;
    days = days % 365;
    weeks = days / 7;
    remain_days = days % 7;
    
    printf("There are %d years, %d weeks, and %d days", years,weeks,remain_days);
    
    return 0;
}