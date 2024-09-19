#include<stdio.h>

/*
	Q.4 Develop a program that prints the given Inverted Left half triangle pattern using a nested for
	loop.
	1 0 1 0 1
	  1 0 1 0
		1 0 1
		  1 0
		    1
*/

main(){
	
	int a,b,c;
	
	for(a=5; a>=1; a--){
		for(c=5; c>=a; c--){		
		printf("  ");
	}
	
	for(b=1; b<=a; b++){	
		printf("%d ",b%2);
	}
		printf("\n");
	
}

}
