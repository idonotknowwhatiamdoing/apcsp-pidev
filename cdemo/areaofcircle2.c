#include <stdio.h>
 
int main() {
   float radius, areaofcircle;
 
   printf("Enter the radius of circle : ");
   scanf("%f", &radius);

if ( radius > 3.5 && radius < 12.5) {
   areaofcircle = 3.14 * radius * radius;
   printf("Area of circle : %f", areaofcircle);
} 

   return 0;
}
