#include<stdio.h>

/*
	Write a Program to find the maximum number from the given 4 numbers using nested
	if else.
	For example,
	Input:
	 Enter a value of the first number: 8
	 Enter a value of the second number: 3
	 Enter a value of the third number: 12
	 Enter a value of the fourth number: 7
	Output:
	 The maximum value is: 12
*/

#include <stdio.h>

int main() {
	
    int num1, num2, num3, num4, max;


    printf("Enter a value for the first number: ");
    scanf("%d", &num1);

    printf("Enter a value for the second number: ");
    scanf("%d", &num2);

    printf("Enter a value for the third number: ");
    scanf("%d", &num3);

    printf("Enter a value for the fourth number: ");
    scanf("%d", &num4);

    if (num1 > num2) {
        if (num1 > num3) {
            if (num1 > num4) {
                max = num1;
            } 
			else {
                max = num4;
            }
        } 
		else {
            if (num3 > num4) {
                max = num3;
            } 
			else {
                max = num4;
            }
        }
    } 
	else {
        if (num2 > num3) {
            if (num2 > num4) {
                max = num2;
            } 
			else {
                max = num4;
            }
        } 
		else {
            if (num3 > num4) {
                max = num3;
            } 
			else {
                max = num4;
            }
        }
    }

    printf("The maximum value is: %d\n", max);

}

