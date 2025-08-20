// Program to print the factorial of a given number

#include <stdio.h>

int main()
{

    int n, factorial = 1;

    printf("Enter a number to print it's factorial: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        factorial *= i;
    }

    printf("%d", factorial);

    return 0;
}