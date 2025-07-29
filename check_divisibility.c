// Program to check if a number is divisible by 5 and 11

#include <stdio.h>

int main()
{

    int num;

    printf("Enter a single number: ");
    scanf("%d", &num);

    if (num % 5 == 0 && num % 11 == 0)
    {
        printf("Yeah! the entered number is divisible by 5 and 11.\n");
    }

    else
    {
        printf("Nah! the entered number is not divisible by 5 and 11.\n");
    }

    return 0;
}