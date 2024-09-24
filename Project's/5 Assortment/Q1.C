#include<stdio.h>

/*
	Q.1 Negative Elements in 1D Array
	Develop a program that finds all the negative elements from a given 1D array.
	Example:
	Input:
	Enter the array's size: 5
	Enter array's elements:
	a[0] = 2
	a[1] = -4
	a[2] = 1
	a[3] = -3
	a[4] = -5
	Output:
	Negative elements from an Array: -4, -3, -5
*/

main() {
    int a, b;

    printf("Enter the array's size: ");
    scanf("%d", &b);

    int arr[b];

    printf("Enter the array's elements:\n");
    for(a = 0; a < b; a++) {
    	printf("arr[%d] : ", a);
        scanf("%d", &arr[a]);
    }

    printf("Negative elements from the array: ");
    for(a = 0; a < b; a++) {
        if(arr[a] < 0) {
            printf("%d ", arr[a]);
        }
    }

}

