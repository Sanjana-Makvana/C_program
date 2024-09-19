#include<stdio.h>

/*
	Q.6 Develop a program that prints the given Custom numeric pattern using a nested for loop.
	EX:-
	1 		          1
	1 2	            2 1
	1 2 3         3 2 1
	1 2 3 4     4 3 2 1
	1 2 3 4 5 5 4 3 2 1
*/

main() {
	
    int a, b;

    for (a = 1; a <= 5; a++) {    
        for (b = 1; b <= a; b++) {
            printf("%d ", b);  
        }
      
		for(b=a; b<5; b++){
			printf("    ");
		}
		for(b=a; b>=1; b--){	
		printf("%d ",b);
	}

        printf("\n");  
    }

}
