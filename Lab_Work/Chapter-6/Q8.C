#include <stdio.h>

/*
	Write a Program to print even numbers from 1 to N using a do-while loop.
	For example,
	Input:
	 Enter any number: 9
	Output:
	 2 4 6 8
*/

main() {
	
    int N, num = 2;  

    printf("Enter any number: ");
    scanf("%d", &N);
    
    do {
        if (num % 2 == 0) {
            printf("%d ", num);
        }
        num += 2;  
    } while (num <= N);
    

}

