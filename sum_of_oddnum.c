// Program to find the sum of all odd numbers from 1 to n

#include <stdio.h>

int main()
{

    int n, odd_sum = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        if (i % 2 != 0)
        {
            odd_sum += i;
        }
    }

    printf("Sum of odd numbers from 1 to %d is: %d", n, odd_sum);

    return 0;
}