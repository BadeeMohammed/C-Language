// Program to check whether a triangle is valid by given 3 angles

#include <stdio.h>

int main()
{

    float angle1, angle2, angle3, sum;

    printf("Enter 1st angle of the triangle: ");
    scanf("%f", &angle1);

    printf("Enter 2nd angle of the triangle: ");
    scanf("%f", &angle2);

    printf("Enter 3rd angle of the triangle: ");
    scanf("%f", &angle3);

    sum = angle1 + angle2 + angle3;

    if (sum == 180)
    {
        printf("Yeah! the given 3 angles are valid to form a traingle");
    }

    else
    {
        printf("Nope! the given 3 angles are not valid to form a triangle.");
    }
    return 0;
}