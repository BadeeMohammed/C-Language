// Program to convert celsius to fahrenheit

#include <stdio.h>

int main() {
    
    printf("*Pogram to convert celsius to fahrenheit*\n");
    
float fahr, cels; 

printf("Enter the celsius value to convert into fahrenheit: ");
scanf("%f", &cels);

fahr = (cels * 9/5) + 32;

printf("%f celsius = %f fahrenheits", cels, fahr);

return 0;
}