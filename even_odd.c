// Program to check if the given number is even or odd

#include <stdio.h>

int main() {
    
    int num;
    
    printf("Enter a number to check if it is even or odd: ");
    scanf("%d", &num);
    
    if (num % 2 == 0){
        printf("It is even");
    }
    else {
        printf("It is odd");
    }

    return 0;
}