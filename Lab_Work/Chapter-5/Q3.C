#include <stdio.h>

/*
	Write a Program to find an average mark from a total of three subject marks of a
	student. Each subject’s marks must be given out of 100.
	For example,
	Input:
	Enter maths marks: 90
	Enter english marks: 82
	Enter science marks: 78
	Output:
	Average mark: 83.33
*/


 main() {
 	
    float maths, english, science, average;

    printf("Enter maths marks: ");
    scanf("%f", &maths);

    printf("Enter english marks: ");
    scanf("%f", &english);

    printf("Enter science marks: ");
    scanf("%f", &science);

    average = (maths + english + science) / 3;

    printf("Average mark: %.2f\n", average);

}

