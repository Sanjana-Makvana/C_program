#include<stdio.h>

/*
	Q.7 Develop a program that prints the given Custom alphabetic pattern using a nested for loop.
	EX:-
	* * * * *
	*       *
	* * * * *
	*
	*
*/

#include <stdio.h>

 main() {
 	
    int a, b;
    
    for (a=1; a<=5; a++){
    	printf("* ");
	}
	printf("\n");
	
	printf("* ");
	for (a=2; a<5; a++){
    	printf("  ");
	}
	printf("*\n");
	
	for (a=1; a<=5; a++){
    	printf("* ");
	}
	
	printf("\n");
		
	printf("*\n");	
	printf("*\n");
	
    
}
