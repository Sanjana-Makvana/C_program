#include<stdio.h>

/*
	Q.5 Develop a program that prints the given Full Pyramid pattern using a nested for loop.
	EX:-
			5
		  4 5 4
		3 4 5 4 3
	  2 3 4 5 4 3 2
	1 2 3 4 5 4 3 2 1
*/

main() {
	
   	int a,b,c;
	
	for(a=5; a>=1; a--){
		for(b=1; b<=a; b++){
			printf("  ");
		}
			for(c=a; c<=5; c++){	
		printf("%d ",c);
	}
	for (c=4; c>=a; c--){
		 printf("%d ", c);
	}
		printf("\n");
	}
}

