// Program using ternary operator

#include <stdio.h>

int main()
{

    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    printf(n > 0 ? "positive number" : "negative number");

    return 0;
}