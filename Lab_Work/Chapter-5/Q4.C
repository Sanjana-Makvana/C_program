#include <stdio.h>

/*
	Write a Program to find the minimum number from the given 3 numbers using nested
	if else.  
    For example,
	Input:
	 Enter a value of the first number: 8
	 Enter a value of the second number: 3
	 Enter a value of the third number: 12
	Output:
	 The minimum value is: 3
*/

#include <stdio.h>

 main() {
 	
    int num1, num2, num3, min;

    printf("Enter a value for the first number: ");
    scanf("%d", &num1);

    printf("Enter a value for the second number: ");
    scanf("%d", &num2);

    printf("Enter a value for the third number: ");
    scanf("%d", &num3);

    if (num1 < num2) {
        if (num1 < num3) {
            min = num1;
        } else {
            min = num3;
        }
    } else {
        if (num2 < num3) {
            min = num2;
        } else {
            min = num3;
        }
    }

    printf("The minimum value is: %d\n", min);
}

