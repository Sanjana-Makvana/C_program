#include <stdio.h>

/*
	Q.3 Digit Addition
	 Develop a Program to find the sum of a number's first and last digits.
	Example:
	 Input: Enter any number: 384
	 Output: The sum of the first and the last digit: 7
*/

main(){
	
    int num, lastDigit, firstDigit;
    
    printf("Enter any number: ");
    scanf("%d", &num);
    
	firstDigit = num;
    while (firstDigit >= 10){
        firstDigit /= 10;
    }
    
    lastDigit = num % 10;
    
    int sum = firstDigit + lastDigit;
    
    printf("The sum of the first and the last digit: %d", sum);

}




