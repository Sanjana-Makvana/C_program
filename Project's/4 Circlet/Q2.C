#include<stdio.h>

/*
	Q.2 Develop a program that prints the given Floyd’s triangle pattern using a nested for loop.
	EX:-
	11
	12 13
	14 15 16
	17 18 19 20
*/

main(){
	
	int a,b, num=10;
	
	for(a = 1; a <= 4; a++){
		for(b = 1; b <= a; b++){		
		num++;
		printf("%d ",num);
	}
		
		printf("\n");
}
		
		
}
