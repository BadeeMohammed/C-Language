// Program to input employee salary and assign tax slab

#include <stdio.h>

int main()
{

    float salary, tax;

    printf("Enter your current salary: ");
    scanf("%f", &salary);

    if (salary >= 0 && salary <= 300000)
    {
        printf("Your salary after calculating all taxes is: %.2f\n", salary);
        printf("No taxes\n");
    }

    else if (salary > 300000 && salary <= 600000)
    {
        tax = salary * 0.05;
        salary = salary - tax;
        printf("Your salary after calculating all taxes is: %.2f\n", salary);
        printf("Tax Deducted = %.2f\n", tax);
    }

    else if (salary > 600000 && salary <= 900000)
    {
        tax = salary * 0.10;
        salary = salary - tax;
        printf("Your salary after calculating all taxes is: %.2f\n", salary);
        printf("Tax Deducted = %.2f\n", tax);
    }
    else if (salary > 900000 && salary <= 1200000)
    {
        tax = salary * 0.15;
        salary = salary - tax;
        printf("Your salary after calculating all taxes is: %.2f\n", salary);
        printf("Tax Deducted = %.2f\n", tax);
    }
    else if (salary > 1200000 && salary <= 1500000)
    {
        tax = salary * 0.20;
        salary = salary - tax;
        printf("Your salary after calculating all taxes is: %.2f\n", salary);
        printf("Tax Deducted = %.2f\n", tax);
    }
    else if (salary > 1500000)
    {
        tax = salary * 0.30;
        salary = salary - tax;
        printf("Your salary after calculating all taxes is: %.2f\n", salary);
        printf("Tax Deducted = %.2f\n", tax);
    }
    else
    {
        printf("Please enter correct salary.\n");
    }
}