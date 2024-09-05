#include <stdio.h>

/*
	Write a Program to print leap years between two given numbers using a while loop.
	
	For example,
	Input:
	 Enter the first number: 2020
  	 Enter the second number: 2040
	Output:
	 2020, 2024, 2028, 2032, 2034, 2040
*/

main(){
	
    int startYear, endYear;

    printf("Enter the first number: ");
    scanf("%d", &startYear);

    printf("Enter the second number: ");
    scanf("%d", &endYear);

    if (startYear > endYear) {
        printf("The first number must be less than or equal to the second number.\n");
        return 1;
    }

    int year = startYear;


    while (year <= endYear) {
    	
        if ((year % 4 == 0 && year % 100 != 0) || {
            printf("%d ", year);
        }
        year++;
    }

    printf("\n");

}

