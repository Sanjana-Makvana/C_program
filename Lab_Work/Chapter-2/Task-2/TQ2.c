#include <stdio.h>

 main() {
    
    int number,square;

    printf("Enter a number: ");
    scanf("%d", &number);
    
    square = number * number;
    printf("--------------\n");
    printf("| \t     |\n");
    printf("| %d x %d = %d |\n", number, number, square);
    printf("| \t     |\n");
    printf("--------------");
 
}

