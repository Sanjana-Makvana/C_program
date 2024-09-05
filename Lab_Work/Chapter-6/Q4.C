#include <stdio.h>

/*
	Write a Program to print odd numbers from N to 1 using a while loop.
	For example,
	Input:
 	 Enter any number: 15
	Output:
	 15 13 11 9 7 5 3 1
*/

 main() {
 	
    int N;

    printf("Enter any number: ");
    scanf("%d", &N);

    int num = N;

    while (num >= 1) {
        if (num % 2 != 0) {
            printf("%d ", num);
        }
        num--;
    }

    printf("\n");
}

