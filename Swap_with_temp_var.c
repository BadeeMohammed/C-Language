// Program to swap two numbers using a temporary variable

#include <stdio.h>

int main() {
    
    int a, b, temp;
    
    printf("Enter 1st number: ");
    scanf("%d",&a);
    
    printf("Enter 2nd number: ");
    scanf("%d",&b);
    
    printf("\nValue of 1st number before is: %d", a);
    printf("\nValue of 2nd number before is: %d", b);

    temp = a;
    a = b;
    b = temp;

    printf("\nValue of 1st number after is: %d", a);
    printf("\nValue of 2nd number after is: %d", b);

return 0;
}