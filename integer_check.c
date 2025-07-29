// Program to check if the given number is positive, negative or zero

#include <stdio.h>

int main() {
    
    int num;
    
    printf("Enter any number: ");
    scanf("%d", &num);
    
    if(num < 0){
        printf("The given number is negative");
    }
    
    else if(num == 0){
        printf("The given number is zero");
    }
    
    else{
        printf("The given number is positive");
    }

    return 0;
}