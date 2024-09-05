#include <stdio.h>

/*
	Q.2 Digit Counter
	 Develop a Program to count the total number of digits in a number.
	Example:
	 Input: Enter any number: 752
	 Output: Total number of digits: 3
*/

main() {
	
    int num, count = 0;
    
    printf("Enter any number: ");
    scanf("%d", &num);
    
    if (num == 0) {
        count = 1; 
    } 
	else {
        while (num != 0) {
            num /= 10; 
            count++;    
        }
    }
    
    printf("Total number of digits: %d\n", count);
    
}



