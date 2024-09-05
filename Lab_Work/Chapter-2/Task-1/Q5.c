#include <stdio.h>


 main() {
    float radius,perimeter;

   
    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);


    perimeter = 2 *3.14159 * radius;


    printf("The perimeter (circumference) of the circle is: %.2lf\n", perimeter);
}


