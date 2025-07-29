// Program to calculate the area and perimeter of a circle

#include <stdio.h>

int main() {
    
    float radi, area, peri;

   printf("Enter the radius of the circle: ");
   scanf("%f", &radi);
 
   area = 3.14 * radi * radi;
   
   peri = 2 * 3.14 * radi;
   
   printf("The area of the circle is: %.2f\n", area);
   
   printf("The perimeter of the circle is: %.2f\n",peri);

    return 0;
}