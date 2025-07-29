// Program to assign grades based on marks

#include <stdio.h>

int main()
{

    int marks;

    printf("Enter the marks you scored: ");
    scanf("%d", &marks);

    if (marks <= 0)
    {
        printf("Enter correct marks");
    }

    if (marks >= 90 && marks <= 100)
    {
        printf("You got 'A' grade ");
    }

    if (marks >= 70 && marks < 90)
    {
        printf("You got 'B' grade ");
    }

    if (marks >= 50 && marks < 70)
    {
        printf("You got 'C' grade ");
    }

    if (marks >= 30 && marks < 50)
    {
        printf("You got 'D' grade ");
    }

    if (marks >= 20 && marks < 30)
    {
        printf("You got 'E' grade ");
    }

    if (marks > 0 && marks < 20)
    {
        printf("You got 'F' grade ");
    }

    return 0;
}