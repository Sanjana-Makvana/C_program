#include<stdio.h>

/*
	Q.2 Largest Element in 2D Array
	Develop a Program to find the largest element from a given 2D array.
	Example:
	Input:
	Enter the array's row size: 3
	Enter the array's column size: 3
	Enter array's elements:
	a[0][0] = 2
	a[0][1] = 7
	a[0][2] = 1
	a[1][0] = 3
	a[1][1] = 5
	a[1][2] = 4
	a[2][0] = 8
	a[2][1] = 9
	a[2][2] = 6
	Output:
	The largest element is: 9
*/

main() {
    int a, b , row , col;

    printf("Enter the array's row size: ");
    scanf("%d", &row);
    printf("Enter the array's column size: ");
    scanf("%d", &col);

    int arr[row][col];

    printf("Enter the array's elements:\n");
    for(a = 0; a < row; a++) {
        for(b = 0; b < col; b++) {
        	printf("arr[%d][%d] = ",a,b,arr[a][b]);
            scanf("%d", &arr[a][b]);
        }
    }

    int large = arr[0][0];

    for(a = 0; a < row; a++) {
        for(b = 0; b < col; b++) {
            if(arr[a][b] > large) {
                large = arr[a][b];
            }
        }
    }

    printf("The largest element is: %d\n", large);

}


