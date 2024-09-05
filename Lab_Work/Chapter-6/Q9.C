#include <stdio.h>

/*
	Write a Program to print the Fibonacci series up to N numbers using a for loop.
	For example,
	Input:
	 Enter any number: 8
	Output:
	 0, 1, 1, 2, 3, 5, 8, 13
*/

 main() {
	
    int N, num_1 = 0, num_2 = 1, next;
   

    printf("Enter any number: ");
    scanf("%d", &N);

    int num;
    
    for ( num=1; num <= N; num++) {
        if (num == 1) {
        	
            printf("%d", num_1);  
        } 
		else if (num == 2) {
            printf(", %d", num_2);  
        } 
		else {
            next = num_1 + num_2; 
            printf(", %d", next);
            num_1 = num_2; 
            num_2 = next;
        }
    }

}

