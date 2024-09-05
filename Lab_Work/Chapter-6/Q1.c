#include <stdio.h>

/*
	Write a Program to print 1 to 10 using a while loop.
	
	For example,
	 Output:
	 1 2 3 4 5 6 7 8 9 10
*/

main() {

    int num=1;

    while (num <= 10) {

        printf("%d ", num);
        num++;
    }

    printf("\n");
}

