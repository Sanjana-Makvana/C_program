#include<stdio.h>

/*
	Q.1 Develop a program that prints the given Right half triangle pattern using a nested for loop.
	EX:-
	41
	41 42
	41 42 43
	41 42 43 44
	41 42 43 44 45
*/

main(){
	
	int a,b;
	
	for(a=41; a<=45; a++){
		for(b=41; b<=a; b++){
			printf("%d ", b);
		}
		printf("\n");
	}
	 
}
