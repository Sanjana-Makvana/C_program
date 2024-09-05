#include <stdio.h>

int main() {

    double x, y, result;


    printf("Enter value for x: ");
    scanf("%lf", &x);

    printf("Enter value for y: ");
    scanf("%lf", &y);

 
    result = (x - y) * (x - y);


     printf("The result of (%.2lf - %.2lf)^2 is %.2lf\n", x, y, result);

    return 0;
}

