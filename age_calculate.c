// C program to input your age and calculate birth year

#include<stdio.h>

int main()
{
    int age, curr_year, birth_year;

    printf("Enter your age: ");
    scanf("%d", &age);

    printf("Which year is going on? Please tell me: ");
    scanf("%d", &curr_year);

    birth_year= curr_year - age;
    printf("Your birth year is: %d", birth_year);
    
return 0;
}