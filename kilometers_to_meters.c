// Program to convert kilometers into meters

#include <stdio.h>

int main() {
    printf("*Pogram to convert kilometers into meters*\n");
    
int km, result; 

printf("Enter the number of kilometers to convert in meters: ");
scanf("%d", &km);

result = km * 1000;

printf("%d kms = %d meters", km, result);

return 0;
}