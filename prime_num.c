// Program to check if the given number is a prime or not

#include <stdio.h>
#include <stdbool.h>

int main()
{

    int num;
    bool isprime = true;

    printf("Enter a number to check if it is prime: ");
    scanf("%d", &num);

    if (num <= 1)
    {
        isprime = false;
    }
    else
    {
        for (int i = 2; i <= (num - 1); i++)
        {
            if (num % i == 0)
            {
                isprime = false;
                break;
            }
        }
    }

    if (isprime)
    {
        printf("%d is not a prime number.", num);
    }
    else
    {
        printf("%d is a prime number.", num);
    }

    return 0;
}