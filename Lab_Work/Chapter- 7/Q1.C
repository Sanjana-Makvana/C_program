#include<stdio.h>

/*
	Q1. Write a Program to print the below Left Half Pyramid pattern using nested for loop.
		    1
		  2 1
	    3 2 1
      4 3 2 1
	5 4 3 2 1
*/

main(){
	
	int a,b,c;
	
	for(a=1; a<=5; a++){
		for (c=5; c<=b; c++){
			printf("  ");
		}
		
	for(b=1; b<=a; b++){	
		printf("%d",b);
	}
	printf("\n");
}

}
