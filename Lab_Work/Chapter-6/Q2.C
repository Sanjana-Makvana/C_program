#include <stdio.h>

/*
	Write a Program to print 10 to 1 using a while loop.
	
	For example,
	 Output:
	 10 9 8 7 6 5 4 3 2 1
*/

 main() {
	
    int num = 10;

    while (num >= 1) {

        printf("%d ", num);
        num--;
    }
    printf("\n");

}

