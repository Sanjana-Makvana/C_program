#include <stdio.h>

main() {
    int num1, num2;
    

    printf("Enter the first number: ");
    scanf("%d", &num1);
    
    printf("Enter the second number: ");
    scanf("%d", &num2);
    
   
    int addition = num1 + num2;
    int subtraction = num1 - num2;
    int multiplication = num1 * num2;
    int division = num2 != 0 ? num1 / num2 : 0; 
    int modulo = num2 != 0 ? num1 % num2 : 0; 
    
   
    printf("%d + %d = %d\n", num1, num2, addition);
    printf("%d - %d = %d\n", num1, num2, subtraction);
    printf("%d * %d = %d\n", num1, num2, multiplication);
    printf("%d / %d = %d\n", num1, num2, division);
    printf("%d %% %d = %d\n", num1, num2, modulo);
    
  
}

