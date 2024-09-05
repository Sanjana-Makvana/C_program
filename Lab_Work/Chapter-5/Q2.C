#include <stdio.h>

/*
	Write a Program to find if a given number is neutral or not using a ladder if else.
	For example,
	Input:
	Enter any number: -9
	Output:
	This number is Negative
	-----------------------------------------------
	For example,
	Input:
	Enter any number: 0
	Output:
	This number is Neutral
	-----------------------------------------------
	For example,
	Input:
	Enter any number: 7
	Output:
	This number is Positive
*/
main() {
    int num;
    
    printf("Enter any number: ");
    scanf("%d", &num);

    if (num > 0) {
        printf("This number is Positive\n");
    } else if (num < 0) {
        printf("This number is Negative\n");
    } else {
        printf("This number is Neutral\n");
    }

}

