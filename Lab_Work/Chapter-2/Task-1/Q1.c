#include <stdio.h>



 main() {
 	
   float pie = 3.14;
   
   int radius;
   printf("Enter The Radius of Cicle:");
   scanf("%d",&radius);
   
   printf("The radius of the circle is %.2d\n" , radius);
   
   float area = (float)(pie* radius * radius);
   printf("The area of the given circle is %f", area);
 
}
