// Program to print the address and value of a variable using a pointer variable

#include<stdio.h>

int main(){

int a = 30;
int *b;
b = &a;

printf("\nThe value of variable 'a' is: %d", *b);
printf("\nThe address of variable 'a' is: %u", b);

return 0;
}