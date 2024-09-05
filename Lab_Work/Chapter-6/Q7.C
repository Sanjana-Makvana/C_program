#include <stdio.h>

/*
	Write a Program to print 10 to 1 using a for loop.
	For example,
	Output:
	 10 9 8 7 6 5 4 3 2 1
*/

main() {
   
    for (int num = 10; num >= 1; num--) {
        printf("%d ", num); 
    }

    printf("\n");
   
}

