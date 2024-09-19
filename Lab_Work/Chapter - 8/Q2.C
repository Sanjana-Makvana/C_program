#include<stdio.h>

/*
	Write a Program to find the average of a 1D array.
	For example,
	Input:
	 Enter array size: 5
	 Enter array elements:
	 a[0] = 12
	 a[1] = 42
	 a[2] = 18
	 a[3] = 50
	 a[4] = 26
	Output:
	 Average of an Array: 29.6
*/

main() {
    int a, b;
    float average ;

    printf("Enter array size: ");
    scanf("%d", &b);
    
    printf("Enter array elements:\n");
    int arry[b];    
    for(a = 0; a<b; a++) {
        printf("arry[%d] = ", a);
        scanf("%d", &arry[a]);
        average = arry[a];
    }

    average /= b;

    printf("Average of the Array: %.1f\n", average);

}
