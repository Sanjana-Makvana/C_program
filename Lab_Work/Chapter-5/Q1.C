#include<stdio.h>

/*
   Q.1  Write a Program to find the minimum number from the given 2 numbers using if else.
		For example,
		Input:
		Enter a value of the first number: 8
		Enter a value of the second number: 3
		Output:
		The minimum value is: 3
*/
 main() {
	
    int num1, num2;

    printf("Enter the value of the first number: ");
    scanf("%d", &num1);

    printf("Enter the value of the second number: ");
    scanf("%d", &num2);

    if (num1 < num2) {
        printf("The minimum value is: %d\n", num1);
    } 
	else {
        printf("The minimum value is: %d\n", num2);
    }

}
