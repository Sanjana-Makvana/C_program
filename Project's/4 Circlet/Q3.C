#include<stdio.h>

/*
	Q.3 Develop a program that prints the given Left half triangle pattern using a nested for loop.
	EX:-
			5
		  4 5
		3 4 5
	  2 3 4 5
	1 2 3 4 5
*/

main(){
	
	int a,b,c;
	
	for(a=5; a>=1; a--){
		for(b=1; b<=a; b++){
			printf("  ");
		}
			for(c=a; c<=5; c++){	
		printf("%d ",c);
	}
		printf("\n");
	}
}
