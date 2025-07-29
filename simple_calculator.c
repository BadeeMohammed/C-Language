// Program of a simple calculator using switch-case

#include <stdio.h>

int main()
{

    printf("*SIMPLE CALCULATOR*\n");

    int num1, num2;
    char op;

    printf("Enter a number: ");
    scanf("%d", &num1);

    printf("Enter another number: ");
    scanf("%d", &num2);

    printf("Enter any one of these operation sign(+, -, *, /): ");
    scanf(" %c", &op);

    switch (op)
    {
    case '+':
        printf("%d", num1 + num2);
        break;

    case '-':
        printf("%d", num1 - num2);
        break;

    case '*':
        printf("%d", num1 * num2);
        break;

    case '/':
        if (num2 != 0)
        {
            printf("Result: %d\n", num1 / num2);
        }
        else
        {
            printf("Error: Division by zero!\n");
        }
        break;

    case '%':
        if (num2 != 0)
        {
            printf("Result: %d\n", num1 / num2);
        }
        else
        {
            printf("Error: Modulo by zero!\n");
        }
        break;

    default:
        printf("Invalid operation:");
    }

    return 0;
}