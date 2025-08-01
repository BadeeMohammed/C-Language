// Program to determine type of triangle based on sides

#include <stdio.h>

int main()
{

    float side1, side2, side3;

    printf("Enter 1st side of the triangle: ");
    scanf("%f", &side1);

    printf("Enter 2nd side of the triangle: ");
    scanf("%f", &side2);

    printf("Enter 3rd side of the triangle: ");
    scanf("%f", &side3);

    if (side1 == side2 && side2 == side3)
    {
        printf("It is an Equilateral traingle");
    }

    else if (side1 == side2 || side2 == side3 || side3 == side1)
    {
        printf("It is an Isosceles triangle");
    }

    else
    {
        printf("It is a Scalene triangle");
    }
    return 0;
}