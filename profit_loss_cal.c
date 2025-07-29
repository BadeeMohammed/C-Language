// Program to find profit or loss on a transaction

#include <stdio.h>

int main() {
    
    float s, c, price;
    
    printf("Enter the price that it costed you: ");
    scanf("%f",&c);
    
    printf("Enter the selling price: ");
    scanf("%f",&s);
    
    price = s - c;
    
    if(price <= 0) {
        printf("Sorry, It was a loss. (₹%.2f)", price );
    } 
    
    else{
        printf("Yay! It was a profit! (₹%.2f)", price );
    }
    
    return 0;
}