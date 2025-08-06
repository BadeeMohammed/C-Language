// Program to check eligibility to vote

#include <stdio.h>

int main()
{
    int age;

    do
    {
        printf("Enter your actual age: ");
        scanf("%d", &age);
    }

    while (age <= 0);

    if (age < 18)
    {

        printf("\nYou are not eligible to vote");
    }

    else
    {
        printf("\nYou are eligible to vote");
    }

    return 0;
}